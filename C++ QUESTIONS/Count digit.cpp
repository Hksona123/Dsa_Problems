#include<bits/stdc++.h>
using namespace std
int main()
{
	count(17383);
	rev(24397);
}
//BASIC MATH CONCEPTS
//1.DIGITS
//COUNT DIGIT PROBLEM
//	1. SIMPLE APPROACH
//	void count(int n)
//	{
//		int cnt=0;
//		while(n>0)
//		{
//			cnt=cnt+1;
//			n=n/10;
//		}
//		cout<< "Digits are:" << cnt <<endl;
//	}
//	2. Log approach
//	void count(int n)
//	{
//		int cnt=(int)log10(n)+1;
//		cout<< "Digits are: " << cnt<< endl;
//	}
//	If the division is happening by 10 the time complexity is approximately equal to logn
//2. REVERSE INTEGER
//void rev(int x)
//{
//	int revNum=0;
//	int lastDigit=0;
//	while(x>0)
//	{
//		lastDigit=x%10;
//		revNum=(revNum*10)+lastDigit;
//		x/=10;
//	}
//	cout<< "Reverse number is "<< rev<< endl;
//}
//3. Palindrome Number
//void palin(int n)
//{
//	int x=n;
//	double revNum=0;
//	while(x>0)
//	{
//		lastDigit=x%10;
//		revNum=(revNum*10)+lastDigit;
//		x/=10;
//	}
//	if(revNum==x)
//		return true;
//	else return false;
//}
//4. ARMSTRONG NUMBER
//	void armstrong(int n)
//	{
//		int x=n;
//		while(n>0)
//		{
//			sum=sum+pow(lastDigit,3);
//			n/=10;
//		}
//		if(x==sum)
//			cout<<"Armstrong number";
//		else 
//			cout<<"Not armstrong number";
//	}
//5. Print all divisors
//void printdivisors(int n)
//{
//	for(int i=0;i<=n;i++)
//	{
//		if (n%i==0)
//		{
//			cout<<"The Divisor is:"<<i;
//		}
//	}
//	Here, the time complexity is O(n).
//	for(int i=0;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			cout<<i;
//			if((n/i)!=i)
//			{
//				print(n/i);
//			}
//		}
//	}
//	Here, the complexity will be O(sqrt(n)).
//	we can make it store in a vector and sort it.
//	vector<int> ls;
//	O(sqrt(n))
//	for(int i=0;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			ls.push_back(i);
//			if((n/i)!=i)
//			{
//				ls.push_back(n/i);
//			}
//		}
//	}
//	O(nlogn)
//	sort(ls.begin(),ls.end());
//	for(auto it: ls) cout<<it<<" ";
//}

6. Prime number check
