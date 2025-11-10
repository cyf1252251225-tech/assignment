#include <stdio.h>
int search(int a[],int n,int m)
{
    int a[n];

    int i,j;
    int max = 0;
    int result;
    //bianli congmeiyigeshuzikaishi
    for (i = 0;i < n;i++)
    {
        //xiangjia
        int temp = 0;
  
        for (j = 0; j < m;j++)
        {
            temp += a[(i + j) % 6];
        }
        
        //zhaochu max
        if (temp > max)
        {
            max  = temp;

            result = i;
        }
    }
    printf("%d",result);
    return result;
}

