#include<stdio.h>

int main()
{
    char c[] = {'a','b','c','e','f','g','i','j','k','p','q'};
    char n;
    int low, high,mid;
    printf("Enter:");
    scanf("%c",&n);
    low = 0;
    high = 11 -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (c[mid] == n)
        {
        printf("v,in %d",mid);
        return 0;
        }
        if (c[mid] < n)
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