#include<iostream>
#include<queue>
#include <algorithm>
using namespace std;
struct node
{
	int x,y;

}fs[10000];	
bool nb(node x,node y)
	{
		return x.x<y.x;//x小的小 
	}
int a,i,l,sum=0,P;
void qwer()
{
	priority_queue <int> Q;// 优先队列
	fs[a].x=l,fs[a].y=0;
	for(i=0;i<a;i++)
{
	while(P<fs[i].x)
	{
		if(!Q.empty())
		{	
		P+=Q.top();//返回第一个元素，P=P+对首的第一个元素 
		Q.pop();
		sum++;
		}	
	}	
	Q.push(fs[i].y);
}
cout<<sum;
}
int main()
{
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>fs[i].x>>fs[i].y;
	}
	
	cin>>l>>P;
	for(i=0;i<a;i++)
	{
		fs[i].x=l-fs[i].x;
	}
	sort(fs,fs+a,nb);
	qwer();

	return 0;
}

