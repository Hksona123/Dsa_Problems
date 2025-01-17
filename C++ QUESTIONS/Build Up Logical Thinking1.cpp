
//Pattern:-
//For the outer loop, count the number of lines.
//For the inner loop, focus on the columns& connect them somehow to the rows.
//Print the * in the inner loop
//Observe symmetry
//First one
#include<bits/stdc++.h>
using namespace std;
void pattern1()
{
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern2()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern3()
{
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<j+1;
		}
		cout<<endl;
	}
}
void pattern4()
{
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<i+1;
		}
		cout<<endl;
	}
}
void pattern5(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern6(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n-i;j++)
		{
			cout<<j+1;
		}
		cout<<endl;
	}
}
void pattern7(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++)
		{
			cout<<"*";
		}
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
}
void pattern8(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<2*n-(2*i+1);j++)
		{
			cout<<"*";
		}
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
}
void pattern9(int n)
{
	for(int i=1;i<=2*n-1;i++)
	{
		int stars=i;
		if(i>n)
		{
			stars=2*n-i;
		}
		for(int j=1;j<=stars;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern10(int n)
{
	int start=1;
	for(int i=0;i<n;i++)
	{
		if(i%2==0) start=1;
		else start=0;
		for(int j=0;j<i;j++)
		{
			cout<<start;
			start=1-start;
		}
		cout<<endl;
	}
}
void pattern11(int n)
{
	int x=2*(n-1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			cout<<j;}
		for(int j=1;j<=x;j++){
			cout<<" ";}
		for(int j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
		x-=2;
	}
}
void pattern12(int n)
{
	int x=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			cout<<x;
			x=x+1;
			}
			cout<<endl;
	}
	
}
void pattern13(int n)
{
	for(int i=0;i<n;i++)
	{
		for(char c='A';c<='A'+i;c++){
			cout<<c;
			}
			cout<<endl;
	}
	
}
void pattern14(int n)
{
	for(int i=0;i<n;i++)
	{
		for(char c='A';c<='A'+(n-i-1);c++){
			cout<<c<<" ";
			}
			cout<<endl;
	}
	
}
void pattern15(int n)
{
	char j='A';
	for(int i=0;i<n;i++)
	{
		for(int c=0;c<=i;c++){
			cout<<j;
			}
			cout<<endl;
			j+=1;
	}
	
}
void pattern16(int n)
{
	for(int i=0;i<n;i++)
	{
		char c='a';
		int breakpoint=(2*i+1)/2;
		for(int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++)
		{
			cout<<c;
			if(j<breakpoint) c++;
			else c--;
		}
		for (int j=0;j<n-i-1;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	
}
void pattern17(int n)
{
	for(int i=0;i<n;i++)
	{
		for(char c='e'-i;c<='e';c++)
		{
			cout<<c;
		}
		cout<<endl;
	}
}
void pattern18(int n)
{
	for(int i=0;i<=n;i++)
	{
		//star
		for(int j=0;j<n-i+1;j++)
		{
			cout<<'*';
		}
		//space
		for(int j=0;j<=2*i;j++)
		{
			cout<<" ";
		}
		//star
		for(int j=0;j<n-i+1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<=n;i++)
	{
		//star
		for(int j=0;j<=i;j++)
		{
			cout<<'*';
		}
		//space
		for(int j=0;j<=2*n-2*i;j++)
		{
			cout<<" ";
		}
		//star
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern19(int n)
{
	for(int i=0;i<n;i++)
	{
		//star
		for(int j=0;j<=i;j++)
		{
			cout<<'*';
		}
		//space
		for(int j=0;j<=2*n-2*i;j++)
		{
			cout<<" ";
		}
		//star
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	int k=n-1;
	for(int i=0;i<k;i++)
	{
		//star
		for(int j=0;j<k-i;j++)
		{
			cout<<'*';
		}
		//space
		for(int j=0;j<=2*(i+1);j++)
		{
			cout<<" ";
		}
		//star
		for(int j=k-i;j>=0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern20(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(i==1||i==n)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<"*";
			}
		}
		else
		{
			int s=1;
			//star
			for(int j=f211;j<=s;j++)
			{
				cout<<"*";
			}
			//space
			for(int j=1;j<n-1;j++)
			{
				cout<<" ";
			}
			//star
			for(int j=1;j<=s;j++)
			{
				cout<<"*";
			}
		}
		cout<<endl;
		}
	}
void pattern21(int n)
{
	for(int i=0;i<2*n-1;i++)
	{
		for(int j=0;j<2*n-1;j++)
		{
			int top=i;
			int left=j;
			int bottom=(2*n-2)-i;
			int right=(2*n-2)-j;
			cout<<(n-min(min(top,bottom),min(left,right)));
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	pattern1();
	pattern2();
	pattern3();
	pattern4();
	pattern5(n);
	pattern6(n);
	pattern7(n);
	pattern8(n);
	pattern9(n);
	pattern10(n);
	pattern11(n);
	pattern12(5);
	pattern13(5);
	pattern14(5);
	pattern15(5);
	pattern16(5);
	pattern17(5);
	pattern18(5);
	pattern19(5);
	pattern20(4);
	pattern21(4);
	return 0;
}
