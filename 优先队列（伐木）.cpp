#include<iostream>
#include<queue>
#include <algorithm>
using namespace std;
int a,i,L,b,c;
unsigned long long sum;
priority_queue<int,vector<int>,greater<int> > Q;
void solve()
{
	sum=0;
	if(Q.size()==1)
	{
		b=Q.top();
		Q.pop();
		sum+=b;
	}
	while(Q.size()>1)
	{
		b=Q.top();
		Q.pop();
		c=Q.top();
		Q.pop();
		L=b+c;
		sum+=L;
		Q.push(L);
	}
		cout<<sum;	
}
int main()
{
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>L;
		Q.push(L);
	}
	solve();

}
