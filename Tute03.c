/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main(void)
{
    int num, n, sum = 0;

    printf("Enter a Number :- ");
    scanf("%d", &num);

    for( n = 1 ; n <= num ; n++)
    {
        sum = sum + n ;
    }

    printf("Sum of the Numbers from 1 to %d :- %d\n", num, sum );
    return 0;
}
