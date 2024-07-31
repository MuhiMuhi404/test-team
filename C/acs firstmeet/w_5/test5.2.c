#include <stdio.h>
int main()
{
    int arr[11];
    int i,max;
    for (i=0;i<11;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<11;i++)
    {
        if(arr[i]<arr[i+1])
        max=arr[i];
    }
    printf ("Maximum number: %d",max);
}