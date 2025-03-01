#include<bits/stdc++.h>
using namespace std;
int main()
{
	//I have made the array
	int n;
	cin>>n; 
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	//precompute
	int hash[13]={0};
	for(int i=0;i<n;i++)
	{
		hash[arr[i]]+=1;
	}
	
	int q;
	cin>>q;
	while(q--)
	{
		int number;
		cin>>number;
		//fetch
		cout<<hash[number]<<endl;
	}
	
//	If there has array till 10^9 then we have to declare the array till size 10^9+1. Is is possible?
//	But inside the main function we cannot declare the array size greater than 10^6 if does it will throw a segmentation error.
//	So we can declare it globally there we can declare it upto our need
//	Now we will learn character hashing.
//	"a "=97 and 'z'=122
//	character-"a " is the formula for it.
//	If the string also contain uppercase the better method is 
//	you can take array size of 256 and here we dont have to 
//	apply formula even we can directly put as 'a' at 97th place
	string s;
	cin>>s;
	
	//pre compute 
	int hash[26]={0};
	for(int i=0;i<s.size();i++)
	{
		hash[s[i]-'a']++;
	}
	int q;
	cin>>q;
	while(q--)
	{
		char c;
		cin>>c;
		//fetch
		cout<< hash[c-'a']<<endl;
	}
	//In the previous one we know that character are in lower
	case but if we dont know that the characters are in lower case
	or upper case then we have to apply different technique
	
	return 0;
}

