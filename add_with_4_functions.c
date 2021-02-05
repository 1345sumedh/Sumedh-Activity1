//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int ask_value()
{
int x;
printf("Enter the number:\n");
scanf("%d",&x);
return(x);
}
int add(int a, int b)
{
int sum=a+b;
return(sum);
}
void show(int sum)
{
printf("The addition is: %d",sum);
}
int main()
{
int a,b,sum;
a= ask_value(); b=ask_value();
sum = add(a,b);
show(sum);
return 0;
}
