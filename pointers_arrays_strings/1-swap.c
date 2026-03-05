#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;  /* store the value of a */
*a = *b;    /* assign value of b to a */
*b = temp;  /* assign the stored value to b */
}
