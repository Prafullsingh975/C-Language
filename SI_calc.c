#include<stdio.h>
int main()
{
    float p,r,t,si,A;
    printf("Enter Principle= ");
    scanf("%f",&p);
    printf("Ennter Rate= ");
    scanf("%f",&r);
    printf("Enter Time= ");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("Simple intrest is %f \n",si);
    A = p + si;
    printf("Total Amound is %f",A);
    return 0;
}