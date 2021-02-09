//WAP to find the sum of two fractions.
#include <stdio.h>
#include<stdlib.h>

struct frac
{
int n;
int d;
};

int ask_value()
{
float a;
printf("Enter the value:\n");
scanf("%f",&a);
return (a);
}

struct frac cal(struct frac f1 ,struct frac f2)
{
struct frac addi ={((f1.n*f2.d)+(f2.n*f1.d)),(f1.d*f2.d)};
return addi;
}

struct frac show(struct frac sum)
{
printf("The sum of fractions is : %d/%d",sum.n,sum.d);
}

int main()
{

struct frac f1 ,f2;
f1.n=ask_value();f1.d=ask_value();f2.n=ask_value();f2.d=ask_value();
struct frac sum = cal(f1,f2);
show(sum);
return 0;
}
