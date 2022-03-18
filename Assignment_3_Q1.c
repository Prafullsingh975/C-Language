#include<stdio.h>
int find_odd(int k)
{
    int sequence, count=0, rem;
        while(sequence != -1){
        scanf("%d", &sequence);
        if(sequence%2 != 0){
            count++;
            rem= sequence;
        }
        if(count == k){
            break;
        }
    }
    return rem;
}
int main(){

    int k, sequence = 0,rem, count=0;
    scanf("%d", &k);
    rem = find_odd(k);
    printf("%d", rem);
    return 0;
}