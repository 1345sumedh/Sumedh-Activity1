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
    printf(" hiii %d",c);
    f.n = f.n/c;
    f.d = f.d/c;
    return f;
}

struct frac cal(struct frac f1, struct frac f2)
{
    struct frac sum1;
    sum1.n = (f1.n*f2.d)+(f2.n*f1.d);
    sum1.d = (f1.d*f2.d);
    int ma = gcd(sum1.n,sum1.d);
    //struct fin = simp(sum1,ma);
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
    struct frac f1,f2;
    f1.n=ask_value();f1.d=ask_value();f2.n=ask_value();f2.d=ask_value();
    struct frac addi = cal(f1,f2);
    show (addi,f1,f2);
    return 0;
}
