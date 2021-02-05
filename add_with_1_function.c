//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
  int a,b,sum=0;
  printf("Enter two numbers:\n");
  scanf("%d %d",&a,&b);
  sum=a+b;
  printf("Adittion of %d and %d is %d",a,b,sum);
  return 0;
}
