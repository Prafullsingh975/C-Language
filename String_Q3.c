/* Write a program that takes user's name as input and print length */

#include<stdio.h>

int Count(char arr[]);

int main()
{
    char First_name [100];
    printf("Enter First name: ");
    fgets(First_name,20,stdin);
    printf("Number of alphabets in your name are %d",Count(First_name));
    return 0;
}

int Count(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
            count++;
    }
    return count - 1;
    
}
