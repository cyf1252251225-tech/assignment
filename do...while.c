#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ret = 1, i = 2;
    int number;

    /********** Begin **********/
    do
    {
        printf("Input a number(>0): ");
        scanf("%d", &number); // ✅ 改这里

        if (number < 0)
        {
            printf("Input error! Please input a positive integer x(>0): ");
            scanf("%d", &number);
        }

    } while (number < 0);

    while (i <= number - 1)
    {
        if (number % i == 0)
        {
            ret = 0;
        }
        i++;
    }

    if (ret)
        printf("%d is a prime number\n", number);
    else
        printf("%d is not a prime number\n", number);
    /********** End **********/

    return 0;
}
