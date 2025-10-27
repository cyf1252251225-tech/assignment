#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10 
int main(int argc, char *argv[])
{
  	int data[NUM];
  	int i,j,maxValue,temp;
  	srand((unsigned)time(NULL));
  	
  	for (i = 0;i < NUM;i++)
  	{
        data[i] = rand()%101;
    }

    for (i = 0; i < NUM; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");



    //paixu
    //zhaozuizhi
    for (i = NUM - 1; i > 0;i--)
    {
        maxValue = i;
        for (j = i - 1;j >= 0;j--)
        {
            if(data[j] < data[maxValue])
            {
                maxValue = j;
            }
        }


        //jiaohuan
        if(maxValue != i)
        {
            temp = data[maxValue];
            data[maxValue] = data[i];
            data[i] = temp;
        }
    }
    //paihaohou
    for (i = 0; i < NUM; i++)
    {
        printf("%d ", data[i]);
    }
  return 0;
}
