/*Write a program that replaces the occurence of a given character (say c)
in a primary string (say PS) with another string (say s).

Input:
The first line contains the primary string (PS)
The next line contains a character (c)
The next line contains a string (s)

Output:
Print the string PS with every occurence of c replaced by s.

NOTE:
- There are no whitespaces in PS or s. 
- Maximum length of PS is 100.
- Maximum length of s is 10.
*/

#include<stdio.h>

int main()
{
    char PS[100],S[10],C;
    char *ptr = PS,*ptr1 = S;
    scanf("%s",&PS);
    getchar();
    scanf("%c",&C);
    scanf("%s",&S);

    for (int i = 0; ptr[i] != '\0'; i++)
    {
        if (*ptr==C)
            printf("%s",ptr1);
            else
            printf("%c",ptr[i]);
    }
    
    return 0;
}
