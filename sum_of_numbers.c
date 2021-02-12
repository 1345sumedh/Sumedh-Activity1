#include<stdio.h>
int ask_n()
{
    int n1;
    printf("enter the number of elements: ");
    scanf("%d",&n1);
    return n1;
}

void ask_value(int n, float a[])
{
    printf("enter %d elements:\n",n);
    for(int i =0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
}

float cal(float a[],int n)
{
    float sum1=0;
    for(int i=0;i<n;i++)
    {
        sum1=sum1+a[i];
    }
    return sum1;
}

void show(float s)
{
    printf("Sum of n terms is: %f",s);
}


int main()
{
    int n = ask_n();
    float a[n];
    ask_value(n,a);
    float sum = cal(a,n);
    show(sum);
    return 0;
}
