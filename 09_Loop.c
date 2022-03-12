/*Write a C program to print multiplication table of any number*/
#include<stdio.h>
int main()
{
    int num,table;
    printf("Enter a number to print table ");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        table = num*i;
        printf("%d * %d = %d \n",num, i, table);
    }
    
    return 0;
}
