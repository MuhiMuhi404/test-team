#include<stdio.h>

int main()
{
        printf("1. Rectangle\n2. Triangle\n3. Circle\n");
        float x;
        printf("Enter your choice: ");
        scanf("%f",&x);

        if (x==1)
        { 
        float w,h;
        printf("Enter the width: ");
        scanf("%f",&w);
        printf("Enter the height: ");
        scanf("%f",&h);
        float r=w*h;
        if(w,h<0)
        printf("The area of the rectangle is: Error");
        else
        printf("The area of the rectangle is: %.2f",r);

        }
       else if (x==2) 
       { 
        float b,hh;
        printf("Enter the base: ");
        scanf("%f",&b);
        printf("Enter the height: ");
        scanf("%f",&hh);
        float r=(1.0/2.0)*(b*hh);
        if(b,hh<0)
        printf("The area of the triangle is: Error");
        else
        printf("The area of the triangle is: %.2f",r);
        
        }
        else if (x==3) 
       { 
        float d;
        printf("Enter the radius: ");
        scanf("%f",&d);
        float r=(3.14)*(d*d);
        if(d<0)
        printf("The area of the circle is: Error");
        else
        printf("The area of the circle is: %.2f",r);
        }
        else
        {
            printf("Invalid choice");
        }
    
    }
