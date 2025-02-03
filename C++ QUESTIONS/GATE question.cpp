#include<stdio.h>
void stringcpy(char *s,char *t)
{
	while(*t)
	{
		*s++=*t++;
	}
}
int main()
{
	char a[]="@#hello world!";
	stringcpy(a,a+2);
	printf("%s",a);
}
