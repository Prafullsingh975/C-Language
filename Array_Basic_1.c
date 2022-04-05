/* Write a program to enter price of 3 items and print theri final cost wit GST*/

#include<stdio.h>

int main()
{
    float items[3];
    printf("Enter price of items :\n ");
    scanf("%f",&items[0]);
    scanf("%f",&items[1]);
    scanf("%f",&items[2]);

    printf("Price with GST:\n");
    printf("1. %.2f,\t2. %.2f,\t3. %.2f\t",items[0]+(items[0])*(.18),items[1]+items[1]*.18,items[2]+items[2]*.18);
    return 0;
}
