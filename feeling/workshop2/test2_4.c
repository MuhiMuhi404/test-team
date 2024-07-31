#include<stdio.h>

int main()
{
    float x,y,BMI;
    scanf("%f %f",&x,&y);
    BMI = x/(y*y);
    printf("Your BMI is %.2f\n",BMI);
    if (BMI<18.5)
    {
        printf("You are underweight.");
    }
    else if (BMI<=24.9)
    {
        printf("You are normal weight.");
    }
    else if (BMI<=29.9)
    {
        printf("You are overweight.");
    }
    else if (BMI>=30)
    {
        printf("You are obese.");
    }
}