/*Write a C program to check whether a number is palindrome or not*/
#include<stdio.h>
int main()
{
    int num,temp_num,rem,rev_num=0;
    printf("Enter a number ");
    scanf("%d",&num);
    temp_num=num;
    while (temp_num>0)
    {
        rem = temp_num%10;
        rev_num = rev_num*10+rem;
        temp_num=temp_num/10;
    }
    if (num == rev_num)
    printf("%d is a Palindromic number",num);
    else
    printf("%d is not a Palindromic number",num);
    
    
    
    return 0;
}
