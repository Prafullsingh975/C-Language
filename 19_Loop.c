/* Write a C program to enter a number and print it in words */
#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem=0,revc=0;
    printf("Enter a number ");
    scanf("%d",&num);
    while (num!=0)
    {
        rem = num % 10;
        revc = revc*10+rem;
        num = num /10;
    }
    // printf("%d",revc);
    while (revc!=0)
    {
        switch (revc %10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        // default:
        //     break;
        }
        revc/=10;
    }
    
    
    return 0;
}