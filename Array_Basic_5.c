/* In  an array of number ,Find many times number 'x' occurs */

#include<stdio.h>

int count(int arr[],int n);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    int i = 0;
    // int num = arr[i];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    // count(arr,n);
 for (i = 0; i < n; i++)
 {      int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[i]==arr[j])
            count++;
        
    }
            printf("%d is repated %d times.\n",arr[i],count);
 }         
    return 0;
}
// count same number
// int count(int arr[],int n){
// int count = 0;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[i]==arr[j])
//             count++;
        
//     }
//             printf("%d is repated %d times.",arr[i],count);
    
// }
// return count;
// }