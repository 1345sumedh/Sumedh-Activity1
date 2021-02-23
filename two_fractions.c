//WAP to find the sum of two fractions.
#include<stdio.h>
#include<stdlib.h>
int gcd(int, int);

struct frac
{
    int n;
    int d;
};

int  ask_value()
{
    int  a ;
    printf("enter the value:\n");
    scanf("%d",&a);
    return (a);
}

struct frac simp(struct frac f, int c)
{
    f.n = f.n/c;
    f.d = f.d/c;
    return f;
}

struct frac cal(struct frac f1, struct frac f2)
{
    struct frac sum1; int ma;
    sum1.n = (f1.n*f2.d)+(f2.n*f1.d);
    sum1.d = (f1.d*f2.d);
    ma = gcd(sum1.n,sum1.d);
    return simp(sum1,ma);
}

int gcd(int x,int y)
{
   int max,max1;
    if(x==y)
    max1 = y;
    
    else if(x < y)
    max = y;
    
    else
    max = x;
    for(int i=max;i>=1;i--)
    {
        if(x%i==0 && y%i == 0)
        {
            max1 =i;
            break;
        }
    } 
    
    return(max1);
}

void show(struct frac addi,struct frac f1,struct frac f2)
{
    printf("The sum of %d/%d and %d/%d  is: %d/%d",f1.n,f1.d,f2.n,f2.d,addi.n,addi.d);
}

int main()
{
    struct frac f1,f2,addi;
    f1.n=ask_value();f1.d=ask_value();f2.n=ask_value();f2.d=ask_value();
    addi = cal(f1,f2);
    show (addi,f1,f2);
    return 0;
}
