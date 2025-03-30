#include<arpa/inet.h>
#include<netinet/in.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<netdb.h>

int main(int argc, char *argv[])
{
	struct sockaddr_in serverAddr;
	struct hostent *server;
	char *hostname;
	int socketfd;
	
	if(argc<3)
	{
		fprint(stderr,"use %s <hostname><port>\n",argv[0]);
		exit(-1);
	}
	hostname=argv[1];
	int portno=atoi(argv[2]);
	socketfd=socket(AF_INET,SOCK_DGRAM,0);
	if(!socketfd)
	{
		perror("Error in opening socket");
		exit(1);
	}
	server =gethostbyname(hostname);
	if(server==NULL)
	{
		fprint(stderr,"Can't resolve hostname\n");
		exit(2);
	}
	bzero((char *)&serverAddr,sizeof(serverAddr));
	serverAddr sin_family=AF_INET;
	bcopy((char *)server->h_addr,(char *)&serverAddr.sin_addr.s_addr,server->h_length);
	serverAddr.sin_port=htons(portno);
	char *buf="Hello there!";
	int bufLen=strlen(buf);
	if(sendto(socketfd,buf,buflen+1,0,(struct sockaddr *)&serverAddr,sizeof(serverAddr))<0)
	{
		perror("error in sending");
		exit(3);
	}
	char recvBuf[2048];
	bufLen=sizeof(recvBuf);
	int recvlen=0;
	int serLen=sizeof(serverAddr);
	if((recvLen=recvfrom(socketfd,recvBuf,bufLen,0,(struct sockaddr *)&serverAddr,&strLen))<0){
		perror("Error in recving");
		exit(4);
	}
	recvBuf[recvLen]=0;
	printf("Recv from %s %d:",inet_ntoa(serverAddr.sin_addr),ntohs(serverAddr.sin_port));
	printf("%s\n",recvBuf);
	return 0;
}
