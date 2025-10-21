#include<stdio.h>
int main ()
{
    int item,ratio;
    int sum = 0;
    int fir;
    scanf("%d%d%d",&fir,&item,&ratio);

    sum = fir;

    for (int i=1;i <= item - 1;i++)
    {
        fir *= ratio;
        sum += fir;
    }

    printf("%d",sum);
    return 0;
}