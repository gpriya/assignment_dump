#include <stdio.h>

int main()
{
    int dd, mm, yyyy;
    printf("Enter the date as DD/MM/YYYY:");
    scanf("%3d/%3d/%d", &dd, &mm, &yyyy);
    printf("\"Day - DD, Month - MM, Year - YYYY\" (Day - %d, Month - %d, Year - %d) \n", dd, mm, yyyy);

    return 0;
}