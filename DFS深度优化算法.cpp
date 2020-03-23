#include <iostream>
using namespace std;
char f[100][101];
void dfs(int x,int y)
 {	
 	f[x][y]='.';
 	int dx,dy,nx,ny; 
 	for(dx=-1;dx<=1;dx++)
	 {
 		for(dy=-1;dy<=1;dy++)
		 {
 			nx=dx+x;
 			ny=dy+y;
 			if(nx>=0&&nx<=100&&ny>=0&&ny<101&&f[nx][ny]=='W')
 			dfs(nx,ny);
		}
	}
 		
 }
int main()
{
	int num=0,a,b,i,j;
	cin>>a>>b;
	for(i=0;i<a;i++)
	cin>>f[i];
	for(i=0;i<a;i++)
	{ 
	 
        for(j=0;j<b;j++) 
        if(f[i][j]=='W')
		{ 
        dfs(i,j);
		num++;
        } 
        
    } 
        cout<<num;
 } 

