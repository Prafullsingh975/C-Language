/* Take the string input from user using %c */

#include<stdio.h>

int main()
{
    char str[100];
    char ch;
    int i = 0;
    printf("Enter String: ");    

// This code like act like fgets().
    while (ch != '\n')
    {
        scanf("%c",&str[i]);
        ch = str[i];
        i++;
    }
    str[i]='\0';
    printf("%s",str);
    
    return 0;
}
