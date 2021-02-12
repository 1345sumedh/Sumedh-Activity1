//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
  float a,b;
  printf("Enter two numbers:\n");
  scanf("%f %f",&a,&b);
  float sum=a+b;
  printf("Addition of %f and %f is %f",a,b,sum);
  return 0;
}
