#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;
    unsigned int total;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total = nmemb * size;

    ptr = malloc(total);
    if (ptr == NULL)
        return (NULL);

    /* set all bytes to zero */
    for (i = 0; i < total; i++)
    {
        ((char *)ptr)[i] = 0;
    }

    return (ptr);
}
