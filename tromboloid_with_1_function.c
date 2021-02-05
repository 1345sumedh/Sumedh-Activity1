//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>

int main()
{
    float h,d,b;
    printf("Enter the dimensions of tromboloi(h,d,b)\n");
    scanf("%f %f %f",&h,&d,&b);   
    float area = ((h*b*d)+(d/b))/3;
    printf("area is: %f",area);

    return 0;
}
