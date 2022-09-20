// Write a program to take marks of 5 subjects from the user. 
// Assume marks are given out of 100 and passing marks is 33. 
// Now display whether the candidate passed the examination or failed.
#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4 ,sub5;

    printf("Marks for subject 1: ");
    scanf("%d", &sub1);
    printf("Marks for subject 2: ");
    scanf("%d", &sub2);
    printf("Marks for subject 3: ");
    scanf("%d", &sub3);
    printf("Marks for subject 4: ");
    scanf("%d", &sub4);
    printf("Marks for subject 5: ");
    scanf("%d", &sub5);
    if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33 && sub3 >= 33 && sub4 >= 33 && sub5 >= 33)
        printf("The student has passed\n");
    else
        printf("The student has failed\n");


}