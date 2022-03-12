/*Write a C program to count number of digits in a number*/
int main()
{
    int num,count=0,rem=0;
    printf("Enter a number ");
    scanf("%d",&num);
    while (num>0)
    {
        rem = num%10;
        num = num /10;
        count++;
    }
    printf("Number of digits are %d",count);
    
    return 0;
}
