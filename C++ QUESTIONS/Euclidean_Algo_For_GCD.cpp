#include<bits/stdc++.h>
using namespace std;
void gcd(int a,int b)
{
	while(a>0 && b>0)
	{
		if(a>b){
			a=a%b;
		}
		else
		{
			b=b%a;
		}
		if(a==0) cout<<b;
		else cout<<a;
	}
}
int main()
{
	//First approach 
	int gcd1=1;
	int n1,n2;
	cin>>n1>>n2;
	for(int i=1;i<=min(n1,n2);i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd1=i;
		}
	}
	cout<<gcd1;
	//Second approach
	for(int i=min(n1,n2);i>0;i--)
	{
		if(n1%i==0 && n2%i==0)
		{
			cout<<i;
			break;
		}
	}
	//Third Approach called Eucidean algorithm
	gcd(n1,n2);
//	The time complexity for it is O(log(min(a,b)))
}

