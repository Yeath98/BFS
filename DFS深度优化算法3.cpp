#include <iostream>
#include <cstring>//包含memset函数 
using namespace std;
int dx[4]={0,0,1,-1};//位置的移动 
int dy[4]={1,-1,0,0};//位置的移动 
char map[50][50];
bool vis[50][50];
int ans,h,l;
void dfs(int x,int y)
{	
	for(int i=0;i<4;i++)
	{
		int fx=x+dx[i];
		int fy=y+dy[i];
		if(fx<0||fx>=h||fy<0||fy>=l)//判断是否边界内 
		continue; 
		if(vis[fx][fy]==0&&map[fx][fy]=='.')
		{
			//cout<<fx<<" "<<fy<<endl;‘.’的位置 
			ans++;
			vis[fx][fy]=1;
			dfs(fx,fy);
		}
	}
}
int main()
{
	while(cin>>l>>h)//先输入列 再输入行 
	{
		int x,y;
		if(h==0&&l==0)
		break;
		else 
		{
			for(int i=0;i<h;i++)
			{
				cin>>map[i];
			}
			for(int i=0;i<h;i++)
			{
				for(int j=0;j<l;j++)
				{
					if(map[i][j]=='@')
					{
						x=i;
						y=j;
					}
				}
			}
			memset(vis,0,sizeof(vis));//memset函数的使用 
			ans=1;//@也算
			vis[x][y]=1;
			dfs(x,y);
			cout<<ans<<endl; 
		}
	}return 0;
 } 

