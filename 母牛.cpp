#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		break;
		int a,b,c,d;
		if(n<=4)
		{
		cout<<n<<endl;
		}
		else
		{
		n=n-4;
		a=b=c=d=1;
		int i;
		for(i=0;i<n;i++)
		{
			d+=c;
			c=b;
			b=a;
			a=d;
		}
		cout<<a+b+c+d<<endl;
		}
		有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
