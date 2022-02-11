/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void)
{
    int mark1, mark2, total = 0;
    float average = 0 ;

    printf("Enter marks of the Subject 1 :- ");
    scanf("%d", &mark1);

    printf("Enter marks of the Subject 2 :- ");
    scanf("%d", &mark2);

    total = mark1 + mark2 ;

    average = total / 2.0 ;

    printf("Average :- %.1f\n", average);

    return 0;
}