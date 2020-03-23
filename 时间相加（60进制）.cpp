#include <iostream>
using namespace std;
int ah,am,as,bh,bm,bs;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		cin>>ah>>am>>as>>bh>>bm>>bs;
		as+=bs;
		am+=(bm+as/60);
		ah+=(bh+am/60);
		cout<<ah<<" "<<am%60<<" "<<as%60<<endl;
		}return 0;	
}
