#include "main.h"

/**
* _memset - fills the first n bytes of the memory area pointed to by s
*            with the constant byte b
* @s: pointer to the memory area to fill
* @b: the byte value to fill in memory
* @n: number of bytes to fill
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i; /* counter to iterate through each byte */

for (i = 0; i < n; i++)
{
s[i] = b; /* set each byte to the value b */
}

return (s); /* return the pointer to the start of the memory */
}
