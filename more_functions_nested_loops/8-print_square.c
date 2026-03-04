#include "main.h"

/**
 * print_square - prints a square of size 'size'
 * @size: size of the square
 */
void print_square(int size)
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
		/* Loop through each column */
		for (j = 0; j < size; j++)
			_putchar('#');

		/* Print a new line at the end of the row */
		_putchar('\n');
	}
}
