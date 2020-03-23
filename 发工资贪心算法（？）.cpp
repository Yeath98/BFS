#include <iostream>
using namespace std;
int main()
{
    int min=0,sum=0,n,m[1000];
    while (cin>>n)
    {
    	if(n==0)
    	break;
        for (int i=0;i<n;i++)
            cin>>m[i];
        for (int i=0;i<n;i++)
        {//取整运算/ 
            int a=m[i]/100;//100元所需的张数 
            int b=(m[i]-a*100)/50; //50元所需的张数
            int c=(m[i]-a*100-b*50)/10;//10元所需的张数
            int d=(m[i]-a*100-50*b-10*c)/5;//5元所需的张数
            int e=(m[i]-a*100-50*b-10*c-5*d)/2;//2元所需的张数
            int f=m[i]-a*100-50*b-10*c-5*d-2*e;//1元所需的张数
            min=a+b+c+d+e+f;
            sum+=min;
        }
        cout<<sum<<endl;
    }
    return 0;
}
 
