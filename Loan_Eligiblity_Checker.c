//This Program is based on Logical OR "||"Operators 
#include<stdio.h>

main()
{
    float a,b;
    printf("Enter Your Age ");
    scanf("%f",&a);
    printf("Enter Your Salary ");
    scanf("%f",&b);
    if(a>18||b>25000)
    printf("Congratulation You Are Eligible");
    else
    printf("Oh! Sorry You Are Not Eligible Because Your Salary Is Less Than 25000 and You Are Under Age");
    return 0;
}