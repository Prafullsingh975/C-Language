/*
In this question, you have to output the "moving average" of a
sequence of non-negative numbers. The moving average is the sequence
of averages of the last 2 entries. For the first number, no average
is output.

For example, if the sequence of numbers is

a1, a2, a3, a4, a5

then the 2-moving average is

(a1+a2)/2, (a2+a3)/2, (a3+a4)/2, (a4+a5)/2 


Input
-----

The input is a sequence of non-negative floating point numbers,
terminated by a -1. The -1 is not part of the sequence. There will be
at least 3 numbers in the sequence.

Output
--------------------------------------------------------------------------------------------
You have to output the moving average of the sequence. The output
should be printed correct to one digit after the decimal. 

Sample Input 1
-------------------------------------
1 2 3 -1

Sample Output 1
-------------------------
 1.5 2.5
 */

#include<stdio.h>
int main(){
    float prev,curr;
    float avg;
    scanf("%f",&prev);
    while(prev>-1){
        
        scanf("%f",&curr);
        while(curr>-1){
        avg=(prev+curr)/2;
        prev=curr;
        
        printf("%.1f ",avg);
        
        scanf("%f",&curr);}
      	prev = curr;
    }
    return 0;
}