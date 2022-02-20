/*
You are given two integers, say M and N.
You have to output 1, if remainder is 1 when N divides M 
otherwise output 0

Input----------------------------
Two integers, say M and N.

Output---------------------------------------------------
You have to output 1 if remainder is 1 when M/N.
You have to output 0 , otherwise
*/
#include<stdio.h>
int main()
{
  int M,N,REM;
  printf("Enter Two Number ");
  scanf("%d" "%d",&M,&N);
  REM=M%N;
  if(REM==1)
  {
    printf("1");
  }
  else{
    printf("0");
  }
  return 0;
}