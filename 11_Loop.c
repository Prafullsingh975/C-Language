/*Write a C program to find first and last digit of a number*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int num,count=0,rem=0,Lnum,Fnum,numcopy,count1=0;
    printf("Enter a number ");
    scanf("%d",&num);
    numcopy = num;
    while (numcopy>0)
    {
        rem = numcopy%10;
        numcopy = numcopy/10;
        count++;
    }
    count1 = count - 1;
    Fnum = num/pow(10,count1);
    printf("First number = %d\n",Fnum);
    Lnum = num%10;
    printf("Last number is %d ",Lnum);
    
    return 0;
}
