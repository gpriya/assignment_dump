// Write a program which takes the cost price and selling price of a 
// product from the user. 
// Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
    double cost_p, selling_p, diff, percent;
    printf("Enter the cost price: ");
    scanf("%lf", &cost_p);
    printf("Enter selling price: ");
    scanf("%lf", &selling_p);
    diff = selling_p - cost_p;
    percent = diff / cost_p * 100;

    if (cost_p > selling_p)
        printf("The loss percentage is %.2lf%%\n", percent);
    else
        printf("The profit percentage is %.2lf%%\n", percent);

    return 0;
}