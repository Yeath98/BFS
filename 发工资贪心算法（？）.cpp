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
        {//ȡ������/ 
            int a=m[i]/100;//100Ԫ��������� 
            int b=(m[i]-a*100)/50; //50Ԫ���������
            int c=(m[i]-a*100-b*50)/10;//10Ԫ���������
            int d=(m[i]-a*100-50*b-10*c)/5;//5Ԫ���������
            int e=(m[i]-a*100-50*b-10*c-5*d)/2;//2Ԫ���������
            int f=m[i]-a*100-50*b-10*c-5*d-2*e;//1Ԫ���������
            min=a+b+c+d+e+f;
            sum+=min;
        }
        cout<<sum<<endl;
    }
    return 0;
}
 
