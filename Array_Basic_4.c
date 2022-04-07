/* Writa a program to store first n fabonacci numbers 
Fabonacci = 0,1,1,
formula = 0th term and 1st term are fix i.e. 0,1
            and for other terms  = [term-1] + [term-2]
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;

    printf("First %d fabonacci numbers are:\n",n);

    printf("%d\t",arr[0]);
    printf("%d\t",arr[1]);

    for (int i = 2; i < n; i++)
    {
        arr[i]= arr[i-1] + arr[i-2];
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
