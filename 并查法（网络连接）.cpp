#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
#include<cstring>

using namespace std;
 
int father[1005],n;
int COUNT[1005],num;
struct POINT
{
	double x;
	double y;
};
POINT pt[1005];
 
void init()
{
	int i;
	num=0;
	memset(COUNT,0,sizeof(COUNT));
	for(i=0;i<1005;i++)
		father[i]=i;
}
 
int find(int p)
{
	return p==father[p]?p:father[p]=find(father[p]);
}
 
double dis(POINT a,POINT b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
 
void Union(int a,int b)
{
	int x,y;
	x=find(a);
	y=find(b);
	if(x!=y)
	father[y]=x;
}
 
int main()
{
	int i,x,y;
	double d;
	char k[2];
	cin>>n>>d;
	init();
	for(i=1;i<=n;i++)
		cin>>pt[i].x>>pt[i].y;
	while(cin>>k)
	{
		if(k[0]=='O')
		{
			cin>>x;
			for(i=0;i<num;i++)
			{
				if(dis(pt[COUNT[i]],pt[x])<=d)
					Union(COUNT[i],x);
			}
			cout<<"num"<<num;
			COUNT[num++]=x;
		}
		if(k[0]=='S')
		{
			cin>>x>>y;
			if(find(x)==find(y))
				cout<<"SUCCESS"<<endl;
			else
				cout<<"FAIL"<<endl; 
		}
	}
	return 0;
}

