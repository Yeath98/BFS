#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
#define INF 10000000

struct q
{
	int pos;//位置 
	int step;//步数 
}now,next;

queue<q>Q;//队函数 
int a,b;
bool v[100001];//布尔值（true，false） 
int bfs()
{
	while(!Q.empty())//如果队列空则返回真,此处判断不为空。 
		Q.pop();
	now.pos=a;
	now.step=0;
	v[now.pos]=true;
	Q.push(now);//q.push(x); 将x接到队列的末端
	while(!Q.empty())//判断不为空 
	{
		now=Q.front();//访问queue队首元素，如例：q.front()，即最早被压入队列的元素。 
		Q.pop();//弹出队列的第一个元素，注意，并不会返回被弹出元素的值。
		next=now;//每次判断都实现位置的转换 
		for(int i=0;i<3;i++)
		{
			if(i==0) 
				next.pos=now.pos+1;
			if(i==1)
				next.pos=now.pos-1;
			if(i==2)
				next.pos=now.pos*2;
			next.step=now.step+1;
			if(next.pos==b)//判断是否到了终点 
				return next.step;
			if(next.pos<0||next.pos>100001)//判断是否在边界内100001 
				continue;
			if(!v[next.pos])//判断为false 
			{
				v[next.pos]=true;
				Q.push(next);
			}
		}
	}
	return INF;
}

int main()
{
	while(cin>>a>>b)
	{
		memset(v,false,sizeof(v));
		if(a<b)
			cout<<bfs()<<endl;
		if(a==b)
			cout<<0<<endl;
		if(a>b)
			cout<<a-b<<endl;
	}
}
