#include<stdio.h>

void Swap_value(int a,int b);//Call by value
void Swap_ref(int *p,int *q);// Call by referance

int main()
{
    int x,y;
    printf("Enter value of x and y \n");
    scanf("%d",&x);
    scanf("%d",&y);
    Swap_value(x,y);
    printf("x = %d and y = %d \n",x,y);
    Swap_ref(&x,&y);
    printf("x = %d and y = %d \n",x,y);
    return 0;
}

// call by value
void Swap_value(int a,int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d and b = %d \n",a,b);
}

//Call by reference
void Swap_ref(int *p,int *q){
    int t = *p;
    *p = *q;
    *q = t;
    //printf("p = %d and y = %d \n",*p,*q);
}