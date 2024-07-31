#include <stdio.h>
int main()
{
    float w,h;
    scanf("%f",&w);
    scanf("%f",&h);
    float BMI=(w/(h*h));
    if (BMI<18.5)
    {
        printf("Your BMI is %.2f\n",BMI);
        printf("You are underweight.");
    }
    else if (BMI>=18.5 && BMI<=24.9)
    {
        printf("Your BMI is %.2f\n",BMI);
        printf("You are normal weight.");
    }
    else if (BMI>=24.9 && BMI<=29.9)
    {
        printf("Your BMI is %.2f\n",BMI);
        printf("You are overweight.");
    }
    else if (BMI>=30.0)
    {
        printf("Your BMI is %.2f\n",BMI);
        printf("You are obese.");
    }
    
    return 0 ;
}