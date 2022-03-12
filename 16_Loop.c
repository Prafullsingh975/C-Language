/*Write a C program to enter a number and print its reverse.*/
#include<stdio.h>
int main()
{
    int num,rem,rev_num=0;
    printf("Enter a number ");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%10;
        rev_num= rev_num*10+rem;
        num=num/10;
    }
    printf("Reverse of number = %d",rev_num);
    
    return 0;
}
