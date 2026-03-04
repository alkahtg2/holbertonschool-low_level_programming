#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 with FizzBuzz rules
 *
 * Return: 0
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) /* multiple of both 3 and 5 */
            printf("FizzBuzz");
        else if (i % 3 == 0)           /* multiple of 3 */
            printf("Fizz");
        else if (i % 5 == 0)           /* multiple of 5 */
            printf("Buzz");
        else                            /* all other numbers */
            printf("%d", i);

        if (i != 100)                  /* print a space after everything except last */
            printf(" ");
    }

    printf("\n"); /* final newline */
    return (0);
}
