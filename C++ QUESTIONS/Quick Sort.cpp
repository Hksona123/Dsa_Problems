#include<bits/stdc++.h>
//QUICK SORT which sorts in ascending order
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
	int pivot=arr[low];
	int i=low;
	int j=high;
	while(i<j)
	{
		while(arr[i]<=pivot && i<=high-1)
		{
			i++;
		}
		while(arr[j]>pivot && j>=low+1)
		{
			j--;
		}
		if(i<j) swap(arr[i],arr[j]);
	}
	swap(arr[low],arr[j]);
	return j;
}
void qs(vector<int> arr,int low, int high)
{
	if(low<high)
	{
		int pIndex=partition(arr,low,high);
		qs(arr,low,pIndex-1);
		qs(arr,pIndex+1,high);
	}
}
vector<int> quickSort(vector<int> arr)
{
	qs(arr,0,arr.size()-1);
	return arr;
}
int main()
{
	//1. Pick a pivot and place it in its correct place in the sorted array.
	//2. Smaller on the left and larger on the right Note:- In this, after first step one element will be placed at its correct place.
	//	Time complexity is O(nlogn) and space complexity is O(1).
}
