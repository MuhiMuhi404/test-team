#include<stdio.h>

int main()
{
    int i=0,x;

    scanf("%d",&x);
    for(i=1;i<13;i++)
    {
        printf("%d * %d = %d\n",x,i,x*i);
    }
}