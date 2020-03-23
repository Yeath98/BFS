#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
    int k,n,a,b,num;
	char str[1000];
    while(cin>>n)
    for (k=0; k<n;k++)
    {
        cin>>str;
        a=strlen(str);
        b=(str[0]-'0');
        num=1;
        for (int i=1;i<a;i++)
        {
            if (str[i]-'0'==b)
            {
                num++;
            }
            else
            {
                cout<<num<<b;
                b=str[i]-'0';
                num=1;
            }
        }
       cout<<num<<b<<endl;
   }
    return 0;
}

The look and say sequence is defined as follows. Start with any string of digits as the first element in the sequence. Each subsequent element is defined from the previous one by "verbally" describing the previous element. For example, the string 122344111 can be described as "one 1, two 2's, one 3, two 4's, three 1's". Therefore, the element that comes after 122344111 in the sequence is 1122132431. Similarly, the string 101 comes after 1111111111. Notice that it is generally not possible to uniquely identify the previous element of a particular element. For example, a string of 112213243 1's also yields 1122132431 as the next element.
