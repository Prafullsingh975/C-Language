/*Write a C program to swap first and last digits of a number*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,count=0,temp_num,F_num,L_num,num2,digits;
    printf("Enter a numbe ");
    scanf("%d",&num);
    temp_num = num;
   // digits = (int)log10(num);        Find total number of digits - 1
    printf("%d\n",digits);
    while (temp_num>0)
    {
        temp_num= temp_num/10;
        count++;
    }
    F_num = num /pow(10,(count-1));
    L_num = num % 10;
    //printf("%d",F_num);
    
    //printf("%d ",num2);
    num2=num%(int)pow(10,(count-1));
    //printf("%d ",num2);
    num2=num2 /10;
    //printf("%d",num2);
    printf("After Swaping first and last number from %d we get %d%d%d ",num,L_num,num2,F_num);


    
    return 0;
}
