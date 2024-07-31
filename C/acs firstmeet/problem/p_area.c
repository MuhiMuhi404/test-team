#include <stdio.h>
int main()
{
    float ch,w,h,b,r;
    float result=0;
    printf("1. Rectangle\n");
    printf("2. Triangle\n");
    printf("3. Circle\n");
    printf("Enter your choice: ");
    scanf("%f",&ch);
    if(ch==1)
    {
        printf("Enter the width: ");
        scanf("%f",&w);
        printf("Enter the height: ");
        scanf("%f",&h);
        result=w*h;
        if(result<0){
            printf("The area of the rectangle is: Error");
        }
        else{
            printf("The area of the rectangle is: %.2f",result);
        }
    }
    else if(ch==2)
    {
        printf("Enter the base: ");
        scanf("%f",&b);
        printf("Enter the height: ");
        scanf("%f",&h);
        result=((b*h)/2.0);
        if(result<0){
            printf("The area of the triangle is: Error");
        }
        else{
            printf("The area of the triangle is: %.2f",result);
        }
    }
    else if(ch==3)
    {
        printf("Enter the radius: ");
        scanf("%f",&r);
        result=3.14*r*r;
        if(result<0){
            printf("The area of the circle is: Error");
        }
        else{
            printf("The area of the circle is: %.2f",result);
        }
    }
    else{
        printf("Invalid choice");
    }
}