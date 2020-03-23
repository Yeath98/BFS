#include<iostream>
#include<cstring>
using namespace std;
char water[10000][100000];
int j,k;
void DFS(int i,int x)
{
     int dx,dy,nx,ny;
     water[i][x]='*';
     for(dx=-1;dx<=1;dx++)
     {
          for(dy=-1;dy<=1;dy++)
          {
               nx=i+dx;ny=x+dy;
               if(nx>=0&&nx<j&&ny>=0&&ny<k&&water[nx][ny]=='@')
                    DFS(nx,ny);

          }
     }

}

int main()
{
     int i,x,res=0;//jk为水洼大小
     while((cin>>j>>k)&&j!=0&&k!=0)
     {
          res=0;
          for(i=0;i<j;i++)
     {
          for(x=0;x<k;x++)
               cin>>water[i][x];
     }
     for(i=0;i<j;i++)
     {
          for(x=0;x<k;x++)
               {if(water[i][x]=='@')
               {DFS(i,x);
               res++;}
               }
     }
     cout<<res<<endl;
     }
}
