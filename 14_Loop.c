/*Write a C program to calculate sum of digits of a number*/
#include<stdio.h>
int main()
{
    int num,rem=0,sum=0;
    printf("Enter a number ");
    scanf("%d",&num);
    int temp_num=num;
    while (temp_num>0)
    {
        rem=temp_num%10;
        sum+=rem;
        temp_num=temp_num/10;
    }
    printf("Sum of all the digits of %d is = %d",num,sum);
    
    return 0;
}
