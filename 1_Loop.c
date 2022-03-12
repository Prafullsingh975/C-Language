/*Write a C program to print all natural numbers from 1 to n. */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to print natural number ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d, ",i);
    }
    
    return 0;
}
