//WAP to find the sum of two fractions.
#include<stdio.h>
#include<stdlib.h>

struct frac
{
    int n;
    int d;
};

float ask_value()
{
    float  a ;
    printf("enter the value:\n");
    scanf("%f",&a);
    return (a);
}

struct frac cal(struct frac f1, struct frac f2)
{
    struct frac sum ={((f1.n*f2.d)+(f2.n*f1.d)),(f1.d*f2.d)};
    int max,max1;
    if(sum.n==sum.d)
    max1 = sum.d;
    
    else if(sum.n < sum.d)
    max = sum.d;
    
    else
    max = sum.n;
    for(int i=max;i>1;i--)
    {
        if(sum.n%i==0 && sum.d%i == 0)
        {
            max1 =i;
            break;
        }
    }
    sum.n = sum.n / max1;
    sum.d = sum.d /max1;
    return sum;
}

void show(struct frac addi,struct frac f1,struct frac f2)
{
    printf("The sum of %d/%d and %d/%d  is: %d/%d",f1.n,f1.d,f2.n,f2.d,addi.n,addi.d);
}

int main()
{
    struct frac f1,f2;
    f1.n=ask_value();f1.d=ask_value();f2.n=ask_value();f2.d=ask_value();
    struct frac addi = cal(f1,f2);
    show (addi,f1,f2);
    return 0;
}
