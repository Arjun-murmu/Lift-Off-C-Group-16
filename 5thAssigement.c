#include<stdio.h>

int main()
{
    float r;                                                                               //r is radius
    printf("Enter Circle radius : ");                                                     //user circle radius input
    scanf("%f",&r);

    printf("Diameter of circle : %f\n", 2*r);                                             //formula of circle diameter 2r

    printf("Circle Circumference : %f\n", 2*3.14*r);                                    //formula of circle circumference   2*pi*r

    printf("Area of Circle : %f\n", 3.14*r*r);                                         //formula of circle area   pi*r*r

    return 0;
}