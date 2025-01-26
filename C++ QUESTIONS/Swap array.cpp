#include<bits/stdc++.h>
using namespace std;
//Reverse an array then going to find palindrome
//Here we can use two pointers too one from starting and one from end and the starting one moves to right and ending one moves to left.
f(int i, int arr[], int n)
{
	if(i>=n/2) return;
	swap(arr[i],arr[m-i-1]);
	f(i+1,arr,n);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>> arr[i];
	f(0,arr,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	return 0;
}
