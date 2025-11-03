#include<stdio.h>
#include<string.h>
int main(){

    int a[3][3] = {0};
    //遍历
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j <3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //求和
    int sum = 0;
    for(int i = 0;i < 3;i++)
    {
        for(int j = i;j <3;j++)
        {
            sum += a[i][j];
        }
    }

    printf("%d",sum);
    return 0;
}