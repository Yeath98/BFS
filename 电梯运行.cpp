#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
    	if(t==0)
    	break;
        int m=0;
        int c=0;
        for(int i=0;i<t;++i)
        {
            int n;
            cin>>n;
            if(n>c)
                m+=(n-c)*6+5;
            if(n==c)
                m+=5;
            if(n<c)
                m+=(c-n)*4+5;
            c=n;
        }
        cout<<m<<endl;
    }
    return 0;
}

The highest building in our city has only one elevator. A request list is made up with N positive numbers. The numbers denote at which floors the elevator will stop, in specified order. It costs 6 seconds to move the elevator up one floor, and 4 seconds to move down one floor. The elevator will stay for 5 seconds at each stop. 

For a given request list, you are to compute the total time spent to fulfill the requests on the list. The elevator is on the 0th floor at the beginning and does not have to return to the ground floor when the requests are fulfilled. 



