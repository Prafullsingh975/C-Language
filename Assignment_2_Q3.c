/*
You are given a non-negative sequence of numbers, ending with a -1. You can assume that there are at least two numbers before the ending -1. 

Note : -1 is not a part of input. It only signifies that input has ended.

Let us call the sequence x0  x1 ... xn -1.

You have to output the second largest element of the sequence. if there is no second largest element in the sequence then output 0.

Kindly do not use arrays in the code. 
*/

#include<stdio.h>
int main() {
 int value, first, second;
 scanf("%d", &value);
 first = value;
 second = 0;
 while(value!=-1) {
 scanf("%d", &value);
 if(first < value) {
 second = first;
 first = value;
 }
 }
 if(second != 0)
 printf("%d", second);
 else
 printf("0");

 return 0;
}