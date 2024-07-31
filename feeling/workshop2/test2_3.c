#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if (x>=80)
    {
        printf ("Grade :A");
    }
    else if (80>x>=75)
    {
        printf("Grade :B+");
    }
    else if (75>x>=70)
    {
        printf("Grade :B");
    }
    else if (70>x>=65)
    {
        printf("Grade :C+");
    }
    else if (65>x>=60)
    {
        printf("Grade :C");
    }
    else if (60>x>=55)
    {
        printf("Grade :D+");
    }
    else if (55>x>=50)
    {
        printf("Grade :D");
    }
    else 
    {
        printf("Grade :F");
    }
}

