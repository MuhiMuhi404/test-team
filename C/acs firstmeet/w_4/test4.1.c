#include <stdio.h>
int main()
{
    int a=0,b=1,i=0,f;
    while (i<10)
    {
        printf("%d ",a);
        f=a+b;
        a=b;
        b=f;
        i++;
    }
    
    return 0 ;
}