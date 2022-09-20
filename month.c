// Write a program which takes the month number as an input and 
// display number of days in that month
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number between 1-12: ");
    scanf("%d", &n);
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
        printf("31 days\n");
    else if (n == 2)
        printf("28/29 days\n");
    else
        printf("30 days\n");

    return 0;
}