/*Write a C program to print all even numbers between 1 to 100*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number to print all even numbers between 1 to ");
    scanf("%d",&num);
    printf("Even Numbers between 1 to %d are :- \n",num);
    for (int i = 1; i <= num; i++)
    {
        if (i%2==0)
        {
           printf("%d, ",i);
        }
    }
    
    return 0;
}
