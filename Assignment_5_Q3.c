/*
Write a recursive program that inputs a line of characters from the user. The line may contain blanks. It outputs the line with the characters reversed. The input ends with EOF (end of file). 
NOTE: You have to use recursion to solve this, and are NOT allowed to use array to store the input!! 

Example: 
INPUT 
This is easy 

OUTPUT 
ysae si sihT
*/

#include<stdio.h>

void Reverse();

int main()
{
    printf("Enter a sentence:\n");
    Reverse();
    return 0;
}

void Reverse(){
    char c = getchar(); //taking input
    if (c != '\n')//'\n' is EOF => End Of File Charactor
    {
            Reverse();
            printf("%c",c); // We can also use putchar(c) on the place of printf(). For printing. 
    }
    
}