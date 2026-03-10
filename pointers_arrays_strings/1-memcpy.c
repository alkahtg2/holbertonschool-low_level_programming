#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: pointer to the destination memory area
* @src: pointer to the source memory area
* @n: number of bytes to copy
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i; /* counter for iteration */

for (i = 0; i < n; i++)
{
dest[i] = src[i]; /* copy each byte from src to dest */
}

return (dest);
}
