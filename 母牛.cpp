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
		��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
