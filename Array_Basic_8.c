/* Write a program to insert an element at the given position of an array */ 

#include<stdio.h>
#define Max size 100 // define maximum size of arry is of 100 element

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int num,position;
    printf("Enter number to insert: ");
    scanf("%d",&num);
    printf("Enter position to inser the element: ");
    scanf("%d",&position);

    if (position > size+1 || position <= 0)
    {
        printf("Invalid position ! Please input valid position between 1 to %d",size);
    }
    else
    {
        for ( i = size-1; i >= position; i--){
         arr[i] = arr[i-1];}
         arr[position-1]=num;
         size++;
         printf("Array after inserting new element:\n");
        for ( i = 0; i < size; i++){
            printf("%d\t",arr[i]);}
    }
    
    return 0;
}
