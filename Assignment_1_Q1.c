/*
You will be given 3 integers as input. The inputs may or may not be
 different from each other. 

You have to output 1 if sum of first two inputs is greater than the third input, 
and 0 otherwise

Input
-------------------------------------
Three integers separated by space.

Output
----------------------------------
1 if sum of first two inputs is greater than third input
0 otherwise 1
*/

#include<stdio.h>
int main()
{
    int x, y, z;
    printf("Enter three numbers seperated by SPACE ");
    scanf("%d %d %d",&x,&y,&z);
     if(x+y>z)
        {
          printf("1");
        }
        else{
          printf("0");
        }
          
    return 0;
}
/*              input       output
Test Case 1	    1 2 3         0
Test Case 2	    11 1 2        1
*/