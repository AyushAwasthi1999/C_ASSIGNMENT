// WAP to find area of triangle

#include<stdio.h>
int main()
{
     // declare variables
     float b, h, area;

     // take inputs
     printf("Enter base and height (in cm): ");
     scanf("%f %f", &b, &h);

     // calculate area
     area = (0.5 * b * h);

     // display result
     printf("Area of triangle= %.2f cm\n",
                                   area );

     return 0;
}