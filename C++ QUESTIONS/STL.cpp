#include <bits/stdc++.h>  // All necessary libraries are included
using namespace std;

// Function to explain pairs
void explainPairs() {
    pair<int, int> p1 = {1, 3};  // First pair
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};  // Nested pair
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> a[] = {{1, 2}, {3, 4}, {5, 6}};  // Array of pairs
    cout << a[1].first << endl;  // Accessing the first element of the second pair in the array
}

void explainVector()
{
	vector<int> v;
	
	v.push_back(10);
	v.emplace_back(20);
	vector<pair<int,int>> vec;
	
	v.push_back({10,20});
	v.emplace_back(10,20);
	
	vector<int> v(5,100);
	
	vector<int> v(5);
	
	vector<int> v1(5,20);
	vector<int> v2(v1);//Makes a copy of v1
	
	//Iterators in vector
	vector<int>:: iterator it=v.begin();
	
	it++;
	cout<<*(it)<<" ";
	
	
	it+=2;;
	cout<<*(it)<<" ";
	
	vector<int>::iterator it=v.end();
	vector<int>::iterator it=v.rend();
	vector<int>::iterator it=v.rbegin();
	
	cout<<v[0]<<" "<<v.at[0];
	
	cout<<v.back()<<" ";//Last element
	
	for(vector<int>::iterator it=v.begin(); it!=v.end();it++)
	{
		cout<<*(it)<<" ";
	}
	for(auto it=v.begin(); it!=v.end();it++)
	{
		cout<<*(it)<<" ";
	}
	for(auto it:v)
	{
		cout<<it<<" ";
	}
	
	v.erase(v.begin()+1);
	
	v.erase(v.begin()+1,v.begin()+2);
	
	vector<int>v(2,100);
	v.insert(v.begin(),300);
	v.insert(v.begin()+1,2,100);
	
	vector<int> copy(2,50);
	v.insert(v.begin(),copy.begin(),copy.end());
	
	cout<<v.size();
	
	v.pop_back();
	
	v1.swap(v2);
	
	v.clear();
	
	cout<<v.empty();
}

void explainList()
{
	list<int> ls;
	
	ls.push_back(10);
	ls.emplace_back(20);
	
	ls.push_front(5);
	
	ls.emplace_front();{2,4};
	//rest functions are same as vector
	//begin,end,rbegin,rend,clear,insert,size,swap
}

void explainDeque()
{
	deque<int> dq;
	dq.push_back(10);
	dq.emplace_back(20);
	dq.push_front(5);
	dq.emplace_front(2);
	
	dq.pop_back();
	dq.pop_front();
	
	dq.back();
	
	dq.front();
	//rest functions are same as vector
	//begin,end,rbegin,rend,clear,insert,size,swap
}

void explainStack(){
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.emplace(100);
	
	cout<<s.top();
	
	s.pop();
	
	cout<<s.top();
	
	cout<<s.size();
	
	cout<<s.empyt();
	
	stack<int> s1,s2;
	s1.swap(s2);
}

void explainQueue()
{
	queue<int> q;
	q.push(100);
	q.push(200);
	q.emplace(400);
	
	q.back()+=5
	
	cout<<q.back();
	
	cout<<q.front();
	
	q.pop();
	
	cout<<q.front();
}

void explainPQ()
{
	priority_queue<int>pq;
	pq.push(50);
	pq.push(5111);
	pq.push(511);
	pq.push(52);
	pq.push(15);
	pq.emplace(10);
	
	cout<<pq.top();
	
	pq.pop();
	
	cout<<pq.top();
	
	//size swap empty functions same as others
	
	//Minimum Heap
	priority_queue<int, vector<int>, greater<int>>pq;
	pq.push(1);
	pq.push(5);
	pq.emplace(10);
	
	cout<<pq.top();
}

void explainset()
{
	set<int> st;
	st.insert(1);
	st.emplace(3);
	st.insert(3);//It will not insert
	st.insert(4);
	st.insert(5);
	
	auto it=st.find(3);
	auto it=st.find(6);//As the 6 is not present in the set so it will give st.end()
	
	st.erase(5);
	
	int cnt=st.count(1);
	
	auto it=st.find(3);
	st.erase(it);
	
	auto it1=st.find(2);
	auto it2=st.find(4);
	st.erase(st1,st2);
	
	auto it=st.lower_bound(2);
	auto it=st.upper_bound(5);
}

void explainMultiset()//Only sorted
{
	multiset<int> ms;
	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	
	ms.erase(1);
	
	int c=ms.cout(1);
	ms.erase(ms.find(1));
	
	ms.erase(ms.find(1),ms.find(1)+2);
}

void explainUset()
{
	unordered st<int> st;
//	Lower bound and upper bound function does not works,else than that all functions are same as above.
//	It does not stores in any particular order it has a better complexity than set in most cases, except some when collision happens.
 } 
 
 void explainmap()
 {
 	//key are unique even the values can be same or different
 	//stores in sorted order of key
 	map<int,int> mp;
 	map<int,pair<int,int>> mp1;
 	map<pair<int,int>,int> mp2;
	mp[1]=12;
	mp.emplace({3,1});
	mp.insert({2,4});
	mp[{2,3}]=10;
	
	
	for(auto it:mp){
		cout<<it.first<<" "<<it.second<,endl;
	}	 
	
	cout<<mp[1];
	cout<<mp[5];
	
	auto it=mp.find(3);
	cout<<*(it).second;
	
	auto it=mp.find(5);
	auto it=mp.lower_bound(2);
	auto it=mp.upper_bound(3);
	//erase,swap,size,empty, are same as above
}

void explainMultimap()
{
	//everything same as map, only it can store multiple keys
	//only mp[key] cannot be used here
}

void explainUnorderedMap()
{
	//same as set and unordered_set difference
}

boolcomp(pair<int,int>p1,pair<int,int>p2)
{
	if(p1.second<p2.second)
	{
		return true;
	}
	else if(p1.second==p2.second)
	{
		if(p1.first>p2.second) return true;
	}
	return false;
}
void explainExtra()
{
	sort(a+2,a+4);
	sort(v.begin(),v.end());
	sort(a+2,a+4);
	
	sort(a,a+n,greater<int>);
	
	pair<int,int> a[]={{1,2},{2,1}.{4,1}};
	
	sort(a,a+n,comp);
	
	int num=7;
	int cnt=__builtin_popcount();//give the number of 1 in binary conversion
	
	long long num=4544654654646;
	
	int cnt=__builtin_popcount();
	
	string s="123";
	do{
		cout<<s<<endl;
	}while(next_pemutation(s.begin(),s.end()));
	
	int maxi=*max_element(a,a+n);
}
int main() {
    explainPairs();
    return 0;
}

