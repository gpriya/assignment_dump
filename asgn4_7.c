// Write a C program containing declaration of three variables 
// (of type int, char and float), also assign some values to them 
// and print values of all three variables using single printf().
#include <stdio.h>
int main()
{
    int i = 9;
    char c = 'A';
    float f = 1.2f;
    printf("%d %c %.2f", i, c, f);
    printf("\n");
    return 0;
}