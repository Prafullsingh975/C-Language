/* Write a C program to print all natural numbers in reverse (from n to 1). */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to print natural number ");
    scanf("%d",&num);
    for (int i = num; i >= 1; i--)
    {
        printf("%d, ",i);
    }
    
    return 0;
}
