#include<iostream>
using namespace std;
int f(int a,int b)
{
	return b?f(b,a%b):a;//�����b����f()������a 
}
int main() 
{ 
	int a,b;
	while(cin>>a>>b)
	cout<<a/f(a,b)*b;//�ȳ���˻Ὣ����λ�����ͣ���ֹ������//
	return 0;
}
