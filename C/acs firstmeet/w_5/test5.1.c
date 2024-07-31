#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("Sum of entered numbers:%d \n",sum);
    printf("Numbers in array: ");
    for (i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
   return 0 ;
}