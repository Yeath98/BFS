#include<iostream>
using namespace std;
int j,k,res=0;
char filed[50][50];

void DFS(int x,int i)
{
     filed[x][i]='#';
     res+=1;
     int nx,ny;
     int l,a[4]={0,0,1,-1},b[4]={1,-1,0,0};//左转是i=1时，a[2]=0,b[2]=-1,右转时i=0，上上是i=2，向下是i=3
     for(l=0;l<4;l++)
     {
         nx=x+a[l];
         ny=i+b[l];
         if(filed[nx][ny]=='#')
          continue;
     else if(ny>=0&&nx>=0&&nx<j&&ny<k&&filed[nx][ny]=='.')
     {
          DFS(nx,ny);
     }
     }

}

int main()
{
     int i,x;
     cin>>k>>j;
     for(x=0;x<j;x++)
     {
          for(i=0;i<k;i++)
          {
               cin>>filed[x][i];
          }
     }
     for(x=0;x<j;x++)
     {
          for(i=0;i<k;i++)
          {
               if(filed[x][i]=='@')
               {
			   DFS(x,i);
               break;
			   }   
          }
     }
     cout<<res<<endl;

}
