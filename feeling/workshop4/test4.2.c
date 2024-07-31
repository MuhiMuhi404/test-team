#include<stdio.h>

int main()
{
    int i=0,x,y,fibo;
    x=0 ;
    y=1 ;
    for(i=0;i<10;i++)
    {
        printf("%d ",x);
        fibo=x+y;
        x=y;
        y=fibo;
    }
}