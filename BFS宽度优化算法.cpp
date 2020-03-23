#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
#define INF 10000000

struct q
{
	int pos;//λ�� 
	int step;//���� 
}now,next;

queue<q>Q;//�Ӻ��� 
int a,b;
bool v[100001];//����ֵ��true��false�� 
int bfs()
{
	while(!Q.empty())//������п��򷵻���,�˴��жϲ�Ϊ�ա� 
		Q.pop();
	now.pos=a;
	now.step=0;
	v[now.pos]=true;
	Q.push(now);//q.push(x); ��x�ӵ����е�ĩ��
	while(!Q.empty())//�жϲ�Ϊ�� 
	{
		now=Q.front();//����queue����Ԫ�أ�������q.front()�������类ѹ����е�Ԫ�ء� 
		Q.pop();//�������еĵ�һ��Ԫ�أ�ע�⣬�����᷵�ر�����Ԫ�ص�ֵ��
		next=now;//ÿ���ж϶�ʵ��λ�õ�ת�� 
		for(int i=0;i<3;i++)
		{
			if(i==0) 
				next.pos=now.pos+1;
			if(i==1)
				next.pos=now.pos-1;
			if(i==2)
				next.pos=now.pos*2;
			next.step=now.step+1;
			if(next.pos==b)//�ж��Ƿ����յ� 
				return next.step;
			if(next.pos<0||next.pos>100001)//�ж��Ƿ��ڱ߽���100001 
				continue;
			if(!v[next.pos])//�ж�Ϊfalse 
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
