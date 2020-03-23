/*
每种动物没有告知物种所以每个动物有三种可能
每两种动物都对应三种关系
当他们为同类时  那他们不会是捕食或者被捕食关系
当他们是捕食关系时 他们就不会是同类或者被捕食
x 表示 A类
x+N 表示 B类
x+N*2 表示 C类
A吃B B吃C C吃A 
*/
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int sum=0,i;
int father[100000];
int find(int p)
{
	return p==father[p]?p:father[p]=find(father[p]);//路径压缩 
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
	father[i]=i;//父节点为自己 
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

