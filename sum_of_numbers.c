//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>

int ask_n()
{
int n1;
printf("enter the number of elements: ");
scanf("%d",&n1);
return n1;
}

void ask_value(int n, int a[])
{
printf("enter %d elements:\n",n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}

int cal(int a[],int n)
{
int sum1=0;
for(int i =0;i<n;i++)
{
sum1=sum1+a[i];   
}
return sum1;
}

void show(int s)
{
printf("Sum of n terms is: %d",s);
}

int main()
{
int n = ask_n(); int a[n];
ask_value(n,a);
int sum = cal(a,n);
show(sum);

return 0;
}
