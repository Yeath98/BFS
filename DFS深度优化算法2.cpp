#include<stdio.h>
#include<string.h>
#define N 111
char str[N][N];
int a,b;
int dir[8][2]={1,1, 1,-1, -1,1, -1,-1, 0,1, 0,-1, 1,0, -1,0};//因为是上下左右和斜对角，所以是八个方向。
void fbs(int x,int y)
{
 int i,n,m;
 for(i=0;i<8;i++)
 {
  n=x+dir[i][0];
  m=y+dir[i][1];
     if(n<0||m<0||n>a-1||m>b-1||str[n][m]=='*')
      continue;
     str[n][m]='*';
  fbs(n,m);
 }
}
int main()
{
 int i,j,count;
 while(scanf("%d%d",&a,&b),a||b)
 {
  count=0;
  for(i=0;i<a;i++)
   scanf("%s",str[i]);
  for(i=0;i<a;i++)
  {
   for(j=0;j<b;j++)
   {
    if(str[i][j]=='@')
    {
     str[i][j]='*';
     fbs(i,j);
     count++;
    }
   }
  }
  printf("%d\n",count);
 }
 return 0;
}
