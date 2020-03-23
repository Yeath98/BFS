#include <iostream>
#include <cstring>//����memset���� 
using namespace std;
int dx[4]={0,0,1,-1};//λ�õ��ƶ� 
int dy[4]={1,-1,0,0};//λ�õ��ƶ� 
char map[50][50];
bool vis[50][50];
int ans,h,l;
void dfs(int x,int y)
{	
	for(int i=0;i<4;i++)
	{
		int fx=x+dx[i];
		int fy=y+dy[i];
		if(fx<0||fx>=h||fy<0||fy>=l)//�ж��Ƿ�߽��� 
		continue; 
		if(vis[fx][fy]==0&&map[fx][fy]=='.')
		{
			//cout<<fx<<" "<<fy<<endl;��.����λ�� 
			ans++;
			vis[fx][fy]=1;
			dfs(fx,fy);
		}
	}
}
int main()
{
	while(cin>>l>>h)//�������� �������� 
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
			memset(vis,0,sizeof(vis));//memset������ʹ�� 
			ans=1;//@Ҳ��
			vis[x][y]=1;
			dfs(x,y);
			cout<<ans<<endl; 
		}
	}return 0;
 } 

