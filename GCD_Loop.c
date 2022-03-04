#include<stdio.h>
int main()
{
    int a,b,c,gcd;
    printf("Enter two numbers ");
    //a=102,b=21;
    scanf("%d %d",&a,&b);
    if(b>a){
        c=a;
        a=b;
        b=c;
        // a%b=rem
    }while (b>0)
    {
        gcd=a%b;
        a=b;
        b=gcd;
    }
    printf("GCD = %d",a);
    return 0;
}
