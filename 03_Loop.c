/*Write a C program to print all alphabets from a to z.*/
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter a alphabet to print upto ");
    scanf("%c",&alphabet);
    for (char i = 'a'; i <= alphabet; i++)
    {
        printf("%c, ",i);
    }
    
    return 0;
}
