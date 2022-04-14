/* Ask user to input FirstName and print it back to them */

#include<stdio.h>
#include<string.h>

int main()
{
    char s [100];
    printf("Enter Your First name: ");
    scanf("%s",&s);
    printf("My name is %s\n",s);
    return 0;
}
