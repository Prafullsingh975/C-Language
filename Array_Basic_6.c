/* write a program to find largest number in the array */

#include<stdio.h>
#include<math.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i <size; i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
         max = arr[i];
    }
    printf("Largest Number is %d",max);
    
    
    return 0;
}
