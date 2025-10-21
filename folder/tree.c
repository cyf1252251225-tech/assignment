#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    for (int i = 1;i <= num;i++)
    {

        for (int a = 1;a <= num - i;a++)
        {
            printf(" ");
        }
        
        for (int b = 1;b <= i * 2 - 1;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}