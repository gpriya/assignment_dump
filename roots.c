// Write a program to check whether roots of a given quadratic equation
//  are real & distinct, real & equal or imaginary roots
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    printf("Enter the values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;
    double sq_root = sqrt(b * b - 4 * a * c);


    if (d > 0)
    {
        printf("Roots are real and distinct.\n");
        printf("%.2f %.2f\n", (double)(-b + sq_root) / 2 * a, (double)(-b - sq_root) / 2 * a);

    }
    else if (d == 0)
    {
        printf("Roots are real and equal\n");
        printf("%.2f", -b / 2 * a );
    }
    else if (d < 0)
    {
        printf("Roots are complex \n");
        printf("%.2f + i%.2f\n%.2f - i%.2f", -(double)b / (2 * a), sq_root / (2 * a), -(double)b / (2 * a), sq_root / (2 * a));
    }
    return 0;
}