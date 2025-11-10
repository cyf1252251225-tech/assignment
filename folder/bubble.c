#include <stdio.h>
int main()
{
    int n = 5;
    int a[n];

    int i;
    for (i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }

    //paixu 
    int j;
    int temp;
    for (i = 0;i < n - 1;i++)
    {
        for (j = n - 1;j > i;j--)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    
    //dayin
    for (i = 0;i < n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}