#include<stdio.h>

int main()
{
    int array[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    int sum=0;
    for(i=0;i<5;i++)
    {
        sum = sum + array[i];
    }
    printf("Sum of entered numbers: %d\n",sum);
    printf("Numbers in array:");

    for(i=0;i<5;i++)
    {
        printf(" %d",array[i]);
    }
}