// WAP to find area of circle,

#include<stdio.h>
int main()
{
     // declare variables
     float radius, area;

     // take inputs
     printf("Enter Radius of Circle(in cm): ");
     scanf("%f", &radius);

     // calculate area
     area = 3.14 * radius * radius;

     // display result
     printf("Area of Circle = %.2f cm\n",
                             radius,area);

     return 0;
}