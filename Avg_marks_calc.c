#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter Marks of first Subjec= ");
    scanf("%d",&a);
    printf("Enter Marks of second Subject= ");
    scanf("%d",&b);
    printf("Enter Marks of third Subject= ");
    scanf("%d",&c);
    printf("Enter Marks of forth Subject= ");
    scanf("%d",&d);
    printf("Enter Marks of fifth Subject= ");
    scanf("%d",&e);
    f = (a+b+c+d+e)/5;
    printf("Average Marks of all the Five Subjects are %d",f);
    return 0;
}