/*Write a C program to print all odd number between 1 to 100.*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to print all odd number between 1 to ");
    scanf("%d",&num);
    printf("Odd Numbers between 1 to %d are :- \n",num);
    for (int i = 1; i <= num; i++)
    {
        if (i%2==1)
        {
           printf("%d, ",i);
        }
    }
    

    return 0;
}
