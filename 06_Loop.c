/*Write a C program to find sum of all natural numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter a number to print sum natural number ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        sum+=i;
    }printf("Sum on all natural numbers from 1 to %d = %d ",num,sum);
    
    return 0;
}
