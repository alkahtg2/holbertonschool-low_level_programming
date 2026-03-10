#include "main.h"
#include <stddef.h> /* for NULL */

/**
* _strchr - locates a character in a string
* @s: pointer to the string
* @c: character to locate
*
* Return: pointer to the first occurrence of c in s, or NULL if not found
*/
char *_strchr(char *s, char c)
{
int i; /* counter for iteration */

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}

/* check if the character c is the terminating null byte */
if (c == '\0')
return (&s[i]);

return (NULL); /* return NULL if character not found */
}
