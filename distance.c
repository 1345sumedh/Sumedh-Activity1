//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include<math.h>

float ask_value()
{
    float a;
    printf("Enter the coordinate:\n");
    scanf("%f",&a);
    return (a);
}

float distance(float x1,float y1,float x2,float y2)
{
    float d;
    d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return (d);
}

void show(float d,float x1,float y1,float x2,float y2)
{
    printf("The distance between points (%f,%f) and (%f,%f) is: %f",x1,y1,x2,y2,d);
}

int main()
{
    float x1,y1,x2,y2,d;
    x1=ask_value();y1=ask_value();x2=ask_value();y2=ask_value();
    d = distance(x1,y1,x2,y2);
    show(d,x1,y1,x2,y2);
    return 0;
}
