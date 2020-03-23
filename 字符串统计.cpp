#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int i,len,t=0;
        char ch[1000];
        scanf("%s",ch);
        len = strlen(ch);
        for(i=0;i<len;i++)
        {
            if(ch[i]>='0'&&ch[i]<='9')
            t++;
        }
        printf("%d\n",t);
    }
    return 0;
};
