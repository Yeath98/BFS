#include<stdio.h>
int main()
{
    int A,B,n,i,f[49];
    while(~scanf("%d%d%d",&A,&B,&n)&&A||B||n)
    {
        f[1]=1;
        f[2]=1;
        for(i=3;i<49;i++)
        {
            f[i]=(A*f[i-1]+B*f[i-2])%7;
        }
        if(n%49==0) 
		printf("%d",f[1]);
        else 
		printf("%d\n",f[n%49]);
    }
    return 0;
}A number sequence is defined as follows: 

f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7. 

Given A, B, and n, you are to calculate the value of f(n). 

