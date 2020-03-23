#include<stdio.h>

int main()
{
    int n, i, str[100], max, min, sum;
    while(scanf("%d", &n)!=EOF){
        sum = 0;
        if(n<=2 || n>100){
            continue;
        }
        else{
            for(i=0; i<n; i++){
                scanf("%d", &str[i]);
            }
            max = str[0];
            for(i=0; i<n; i++){
                if(max<str[i]){
                    max = str[i];
                }
            }
            min = max;
            for(i=0; i<n; i++){
                if(str[i]<min){
                    min = str[i];
                }
            }
        }
        for(i=0; i<n; i++){
            if(str[i]==min || str[i]==max){
                str[i] = 0;
            }
            sum += str[i];
        }
        printf("%.2f\n", 1.0*sum/(n-2));
    }
    return 0;
}
青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
