#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
    char *result;
    int i, j;
    int len1 = 0, len2 = 0;

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

/* allocate memory (+1 for '\0') */
result = malloc(sizeof(char) * (len1 + len2 + 1));

if (result == NULL)
return (NULL);

/* copy s1 */
for (i = 0; i < len1; i++)
result[i] = s1[i];

/* copy s2 */
for (j = 0; j < len2; j++)
result[i + j] = s2[j];

/* null terminate */
result[i + j] = '\0';

return (result);
}
