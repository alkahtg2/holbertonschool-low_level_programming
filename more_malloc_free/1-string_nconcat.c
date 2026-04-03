#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to the newly allocated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int i, j;
    unsigned int len1 = 0, len2 = 0;

    /* treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* calculate length of s1 */
    while (s1[len1] != '\0')
        len1++;

    /* calculate length of s2 */
    while (s2[len2] != '\0')
        len2++;

    /* if n is greater than s2 length, adjust n */
    if (n >= len2)
        n = len2;

    /* allocate memory (len1 + n + 1 for '\0') */
    result = malloc(sizeof(char) * (len1 + n + 1));

    if (result == NULL)
        return (NULL);

    /* copy s1 */
    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    /* copy first n bytes of s2 */
    for (j = 0; j < n; j++)
        result[i + j] = s2[j];

    /* null terminate */
    result[i + j] = '\0';

    return (result);
}
