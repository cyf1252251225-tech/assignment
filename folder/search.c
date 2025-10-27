#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 10
int main()
{
    int value[] = {5,13,19,21,37,56,64,75,80,88};
    int low, high,mid,key;
    printf("\nEnter a key : ");
    scanf("%d",&key);
    low = 0;
    high = NUM -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (value[mid] == key)
        {
        printf("v");
        return 0;
        }
        if (value[mid] < key)
        {
             low = mid + 1;
        }
        else
        {
           high = mid - 1;
        }
    }

        printf("x");

    return 0;
}