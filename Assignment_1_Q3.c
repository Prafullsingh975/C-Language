/*
Input : Triplets three numbers (a,b,c)
Output : 1 if they are either in strictly increasing (a>b>c) or decreasing (a<b<c) order
0, otherwise
*/
#include<stdio.h>

int main(){

float a,b,c;
scanf("%f %f %f",&a, &b, &c);

if(a>b && b>c && a>c || a<b && b<c && a<c){
    printf("1");
}
else{
    printf("0");
}

return 0;

}