#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0') /* loop through each character */
{
_putchar(str[i]);
i++;
}

_putchar('\n'); /* print a new line at the end */
}
