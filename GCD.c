/* GCD = Greatest Common Divisor
   GCD of 2 numbers is 
   let two numbers are a and b
   to find GCD first we choose greates no. between a and b.After checking greatest no. use modulo opperatoe and check remender
   for example :
   we have to find GCD of (102,21)
   First we compare the numbers in this case 102>21
   so we performe 
     102 % 21 = 18
     21 % 18 = 3
     18 % 3 = 0
     so the GcD of (102,21) is 3.

     if we have to find GCD of (21 , 102)
     First we compare the numbers in this case 102>21
     so we performe 
     102 % 21 = 18
     21 % 18 = 3
     18 % 3 = 0
     so the GcD of (102,21) is 3.

     if any one no. out of two no is zero then the GCD is non zero number
     for example
     GCD (0 , 21) is 21.
*/

#include<stdio.h>
int main()
{
    int a,b,c,rem;
    c=0;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    if (a>=0 && b>=0)
    {
        if (a>b && b!=0)
        {
            rem = a%b;
            if (rem!=0)
            {
                a=b;
                b=rem;
                rem = a % b;
            }
            printf("GCD = %d",rem);
            
        }else if(a<b && a!=0){
            c=a;
            a=b;
            b=c;
            rem = a%b;
            if (a>b && rem!=0)
            {
                a=b;
                b=rem;
                rem = a % b;
            }
            printf("GCD = %d",rem);
        }else if (a==b)
            {
                printf("GCD = %d",a);
            }else if (a==0 && b>0)
        {
          printf("GCD = %d",b);
        }else if (b==0 && a>0)
            {
                printf("GCD = %d",a);
            }
        }else
            printf("Invalid input");
        return 0;
}
