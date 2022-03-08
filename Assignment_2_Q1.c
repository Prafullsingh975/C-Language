/*
In this assignment, you will be given an NxN matrix. You have to
determine whether the matrix is a upper triangular or lower triangular matrix or both or not a triangular matrix. 

The diagonal of the matrix M of size NxN is the set of entries M(0,0),
M(1,1), M(2,2), ..., M(N,N). 

A matrix is upper triangular if every entry below the diagonal is
0. For example,  
1 1 1
0 0 1
0 0 2
is an upper triangular matrix. (The diagonal itself, and the entries
above can be zeroes or non-zero integers.) 

A matrix is lower triangular if every entry above the diagonal is
0. For example, 
2 0 0
3 1 0
4 2 2
is a lower triangular matrix  (The diagonal itself, and the entries
below can be zeroes or non-zero integers.) . 

A matrix is not a triangular matrix if it is neither a upper triangular nor a  lower
triangular.

You may not use arrays for this program.

Input
First, you will be given N, which is the size of the matrix.

Then you will be given N rows of integers, where each row consists of
N integers separated by spaces. 

Output
If the input matrix is lower triangular, then print -1.
If the input matrix is upper triangular, then print 1.
If the input matrix is both lower and upper triangular, then print 2.
If the input matrix is not a triangular matrix, then print 0.

Kindly do not use arrays in the code.
*/

#include<stdio.h>
int main()
{
    int N,a,upper=1,lower=1,non_tri=1;
    printf("Enter the order of square matrix ");
    scanf("%d",&N);
    for (int i = 0; i < N; i++) //First row of the matrix is started from 0. i.e. according to ij it is 00
    {
        for (int j = 0; j < N; j++)
        {
            printf("Enter number at %d%d ",i,j);
            scanf("%d",&a);
            if (i>j && a!=0)
                upper=0;   
            if (j>i && a!=0)
                lower=0;
        }
    }if (upper==1 && lower==1)
                printf("2");
            else if (upper==1)
                printf("1");
            else if (lower==1)
                printf("-1");

    return 0;
}
