#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;
bool compare(int a,int b)
{
	return abs(a)>abs(b);
}
int main()
{
	int n,a[100],max;
	while(cin>>n)
	{
		if(n==0)
		break;
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n,compare);
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		
	}
	
 } 
