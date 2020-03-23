#include<iostream>
using namespace std;
int f(int a,int b)
{
	return b?f(b,a%b):a;//如果是b返回f()，否则a 
}
int main() 
{ 
	int a,b;
	while(cin>>a>>b)
	cout<<a/f(a,b)*b;//先除后乘会将数的位数降低，防止数过大//
	return 0;
}
