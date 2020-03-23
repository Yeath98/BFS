#include <stdio.h>
int main()
{
   int n,m;
   while(scanf("%d%d",&n,&m)!=EOF)
   {
    int c,b;
    int i;
    int a=2;
    c=n%m;
    b=n/m;
    for(i=0;i<b;i++)
    {
     printf("%d",a+m-1);
     if(i<b-1)
     printf(" ");
     a=a+2*m; 
    }
    if(c!=0)
    printf(" %d",a+c-1);
    printf("\n");
   }
   return 0;
}
