#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	for(int i=0;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cnt++;
			if(n%i!=i)
			{
				cnt++;
			}
		}
	}
	if(cnt==2)
	{
		cout<<"It is prime number";
	}
	else
	{
		cout<<"It is not a prime number"
	}
}//This program has a time complexity of sqrt(n).
