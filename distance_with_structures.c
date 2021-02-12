//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
struct point
{
    float x;
    float y;
};

float ask_value()
{
    float a;
    printf("Enter the coordinate:\n");
    scanf("%f",&a);
    return (a);
}

float distance(struct point p1,struct point p2)
{
    float d;
    d = sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
    return (d);
}

void show(float d)
{
    printf("The distance between points is: %f",d);
}


int main()
{
    struct point p1,p2; 
    p1.x = ask_value();p1.y = ask_value();p2.x = ask_value();p2.y = ask_value();
    float d = distance(p1,p2);
    show(d);
    return 0;
}

