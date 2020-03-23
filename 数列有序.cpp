#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[100],i,j;
	while(cin>>n>>a[0])
	{
	if(n==0&&a[0]==0)
	break;
	else
		for(i=1;i<=n;i++)
	cin>>a[i];
			sort(a,a+n+1);
	for(i=0;i<=n;i++)
	if(i==n)
	cout<<a[i];
	else 
        cout<<a[i]<<" ";
		 cout<<endl;
 }

}

