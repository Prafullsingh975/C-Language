/* Salting:
Find the salted from of a password entered by user if the salt is "123" & added at the end */

#include<stdio.h>
#include<string.h>

void Salting(char arr[]);

int main()
{
    char password[100];
    printf("Enter your password:\n");
    scanf("%s",password);
    Salting(password);
    return 0;
}


void Salting(char arr[]){
char salt[] = "123";
char new_password[200];
strcpy(new_password, arr); // use strcpy() to copy. In this case we copy arr to new_password
strcat(new_password, salt);// use strcat() to concadinate or add any thing to end. In this case we add value of salt to our new_password. i.e. [new_password + salt].
printf("Your password after salting is:\n%s",new_password);
}