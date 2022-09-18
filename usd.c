// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR 
// and convert it into USD.
#include <stdio.h>
int main()
{
    float inr, dollar;
    printf("Enter a amount in INR: ");
    scanf("%f", &inr);
    dollar = inr * 76.23f;
    printf("%.2f INR is %.2f dollars\n", inr, dollar);
    return 0;
}
