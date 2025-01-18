#include<bits/stdc++.h>
using namespace std;
//Recursion problems
//In it segmentation problem occurs, which is called stack overflow when numerous calling of same function occurs.
//1> PRINT NUMBER TILL 10 WITHOUT USIN LOOP
int cnt=1;
void printNos(int n) {
        if(cnt==(n+1))
        {
            return;
        }
        cout<<cnt<<" ";
        cnt++;
        printNos(n);
}
int main()
{
	printNos(10);
}
