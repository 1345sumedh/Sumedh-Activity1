//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float ask_value()
{
    float a;
    printf("Enter the dimensions:\n");
    scanf("%f",&a);
    return (a);
}

float area(float h,float d,float b)
{
    float ar;
    ar= ((h*b*d)+(d/b))/3;
    return (ar);
}

void show(float ar)
{
    printf("The area of the figure is : %f",ar);
}


int main()
{
    float h,d,b,ar;
    h=ask_value();d=ask_value();b=ask_value();
    ar = area(h,d,b);
    show(ar);
    return 0;
}

