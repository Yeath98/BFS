/*
ÿ�ֶ���û�и�֪��������ÿ�����������ֿ���
ÿ���ֶ��ﶼ��Ӧ���ֹ�ϵ
������Ϊͬ��ʱ  �����ǲ����ǲ�ʳ���߱���ʳ��ϵ
�������ǲ�ʳ��ϵʱ ���ǾͲ�����ͬ����߱���ʳ
x ��ʾ A��
x+N ��ʾ B��
x+N*2 ��ʾ C��
A��B B��C C��A 
*/
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int sum=0,i;
int father[100000];
int find(int p)
{
	return p==father[p]?p:father[p]=find(father[p]);//·��ѹ�� 
}
bool same(int a,int b)
{
	return find(a)==find(b);
}
void merage(int a,int b)
{
	int x,y;
	x=find(a);
	y=find(b);
	if(x!=y)
	father[y]=x;
}
 
int main()
{
	int N,K,D[100000],a[100000],b[100000];
	cin>>N>>K&&N<=50000&&K<=100000;
	
	for(i=0;i<N*3;i++)
	father[i]=i;//���ڵ�Ϊ�Լ� 
	for(int i=0;i<K;i++)
	{
		cin>>D[i]>>a[i]>>b[i];
		int x=a[i]-1,y=b[i]-1;
		if(x>N||y>N)
		{
			sum++;
			continue;
		}
		if(D[i]==1)
		{
			if(same(x,y+N)||same(x,y+N*2))//AB,AC 
			{
				sum++;
				continue;
			}
			else
			{
				merage(x,y);//AA
				merage(x+N,y+N);//BB
				merage(x+N*2,y+N*2);//CC
			}
		}
		if(D[i]==2)
		{
			if(same(x,y)||same(x,y+N*2))//AA,AC
			{
				sum++;
				continue;
			}
			else
			{
				merage(x,y+N);//AB
				merage(x+N,y+N*2);//BC
				merage(x+N*2,y);//CA
			}
		}
	}
	cout<<sum;
	return 0;	
}

