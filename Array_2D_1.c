/* Create a 2D array, storing the table of 2 & 3 */

#include<stdio.h>

void Store_table(int arr[][10],int n,int m,int number);

int main()
{
    int table[2][10];

    Store_table(table,0,10,2);
    Store_table(table,1,10,3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",table[0][i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",table[1][i]);
    }
    
    
    return 0;
}
//When ever we pass 2D array we sould pass second dinension
void Store_table(int arr[][10],int n,int m,int number){
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i+1);
    }
    
}

// int main()
// {
//     int arr[2][10];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             arr[i][j] =(i+2)*(j+1);
//             printf("%d  ",arr[i][j]);
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }
