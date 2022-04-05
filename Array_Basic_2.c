/* Write a function to count odd numbers in an array */

# include<stdio.h>

int Odd_num_counter(int arr[],int n);

int main()
{
    int n;
    printf("Enter length : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    Odd_num_counter(arr , n);
    
    return 0;
}

int Odd_num_counter(int arr[] , int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2!=0)
        count++;
    }
    printf("Number of odd number = %d",count);
}