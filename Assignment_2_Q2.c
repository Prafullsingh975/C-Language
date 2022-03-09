/*
You are given a sorted(either in the increasing or in the decreasing order) sequence of positive numbers, ending with a -1. You can assume that there are atleast three numbers before the ending -1. 

Note : -1 is not a part of input. It only signifies that input has ended.

Let us call the sequence x0  x1 ... xn -1.

You have to output 1 if there are atleast three distinct numbers in the sequence.
otherwise output 0

Kindly do not use arrays in the code
*/

#include<stdio.h>
int main()
{
    int num,previous,current;
    int count = 0;
   scanf("%d",&previous);
   if (previous!=-1)
   {
       scanf("%d",&current);
       while (current!=-1)
       {
           if (previous != current)
           {
               count++;
               printf("%d",count);
           }
           
       }previous = current;
        
        scanf("%d",&current);
       
   }
   
    return 0;
}
/* 12325-1
    12325-1/10
*/