/*Write a C program to calculate product of digits of a number*/
#include<stdio.h>
int main()
{
    int num,rem=0,product=1;
    printf("Enter a number ");
    scanf("%d",&num);
    int temp_num=num;
    while (temp_num>0)
    {
        rem=temp_num%10;
        product*=rem;
        temp_num=temp_num/10;
    }
    printf("Product of all the digits of %d is = %d",num,product);
    
    return 0;
}
