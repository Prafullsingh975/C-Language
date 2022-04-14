/* Write your full name and print it back */

#include<stdio.h>

int main()
{
    char s [100];
    printf("Enter your full name: ");
    // We can not use scanf() becouse when we enter SPACE ' ' it can not take ferthure inputs 
    fgets(s , 100 , stdin);   // Taking user input including SPACE
    printf("My full name is ");
    puts(s);   // Output string
    // printf("%s",s);
    return 0;
}
