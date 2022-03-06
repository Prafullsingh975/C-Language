#include<stdio.h>
int main()
{
    int order;
    int i,j;
    int trace = 0;
    int num;
    printf("Enter order of square matrix");
    scanf("%d",&order);
    for ( i = 1; i <= order; i++)
    {
        for ( j = 1; j <= order; j++)
        {
            printf("Enter number at %d%d",i,j);
            scanf("%d",&num);
            if (i==j)
            {
                trace = trace +num;
            }
            
        }
        
    }printf("Trace of matix = %d",trace);
    
    return 0;
}
