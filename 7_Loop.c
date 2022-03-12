/*Write a C program to find sum of all even numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter a number to print the sum of even number ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {if (i % 2==0)
        sum+=i;
    }printf("Sum on all even numbers from 1 to %d = %d ",num,sum);
    
    return 0;
}