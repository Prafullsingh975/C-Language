/* Write a function to reverse an array */

#include<stdio.h>

void Rev_array(int arr[],int n);
void Print_rev(int arr[],int n);

int main()
{
    int n ;
    printf("Enter length or array: ");
    scanf("%d",&n);
    int arr[n];
     printf("Enter elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
        Rev_array(arr,n);
        printf("Reversed Array:\n");
        Print_rev(arr,n);
        
    return 0;
}

void Rev_array(int arr[],int n){
    for (int i = 0; i < n/2; i++)
    {
     int First_num = arr[i];
     int Second_num = arr[n-1-i];
     arr[i] = Second_num;
     arr[n-i-1] = First_num;  
    }
}

void Print_rev(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}