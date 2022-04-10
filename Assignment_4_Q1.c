/*Given two arrays of integers output the largest number in the
first array not present in the second one.

Input: 

The first line contains the size of the first array.
Next line give the contents of the first array.
Next line contains the size of the second array.
Next line give the contents of the second array.

Output Format:
Output must be a single number which is the largest number occurring
in the first array that does not occur in the second. In case there is
no such number, output 0.

Variable Constraints:
The sizes of the arrays are smaller than 20.
Each array entry is an integer which fits an int data type.

Example:
Input:
3
2 3 4
4
1 4 5 7

Output: 3

Input
1
1
2
1 2

Output: 0
*/

#include<stdio.h>

int main()
{
    int n , m;
    printf("Enter length of array1 : ");
    scanf("%d",&n);
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Enter length of array2 : ");
    scanf("%d",&m);
    int arr2[m];

     for (int i = 0; i < m; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr2[i]);
    }

    //Check maximum number in arr1
    int max_num = 0;
    int temp_max;
    
        for (int i = 0; i < n; i++)
        {
            if (arr1[i]>max_num ){
                temp_max = max_num;
                max_num = arr1[i];
                for (int j = 0; j < m; j++)
                {
                    if (arr1[i]==arr2[j])
                        max_num = temp_max;
                }
                
            }
            
        }
        
        printf("Largest number = %d",max_num);
    
    return 0;
}
