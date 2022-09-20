// Write a program which takes the length of the sides of a triangle as an 
// input. Display whether the triangle is valid or not.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values for 3 sides: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Its a triangle\n");
    else   
        printf("Not a triangle\n");

    return 0;
}