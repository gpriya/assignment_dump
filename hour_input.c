#include <stdio.h>
int main()
{
    int hh, mm;
    printf("Enter time HH:MM ");
    scanf("%d:%d", &hh, &mm);
    printf("%d Hour and %d Minutes\n", hh, mm);

    return 0;
}