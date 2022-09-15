#include <stdio.h>

int main()
{
    float area, radius, pi = 3.1415;
    printf("Enter the value for radius: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area of circle is %f having the radius %f\n", area, radius);
    return 0;
}