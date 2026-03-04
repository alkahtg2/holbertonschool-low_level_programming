#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of size 'size'
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	/* If size is 0 or less, print only a new line */
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	/* Loop through each row */
	for (i = 0; i < size; i++)
	{
		/* Print spaces before # */
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');

		/* Print # characters */
		for (j = 0; j < i + 1; j++)
			_putchar('#');

		/* Print a new line at the end of the row */
		_putchar('\n');
	}
}
