#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
int len = 0;
int i;

/* calculate length of string */
while (str[len] != '\0')
{
len++;
}

/* determine starting point */
if (len % 2 == 0)
{
i = len / 2;
}
else
{
i = (len + 1) / 2;
}

/* print second half */
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
