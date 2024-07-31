#include<stdio.h>

int main()
{
    int x,y,result,a;
    printf("Enter X :");
    scanf("%d",&x);
    printf("Enter Y :");
    scanf("%d",&y);
    result = x/y ;
    a = x%y ;
    printf("%d,%d",result,a);
}