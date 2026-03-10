#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer to the string to check
* @accept: pointer to the string containing accepted characters
*
* Return: number of bytes in the initial segment of s
*         which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count;
int found;

count = 0; /* initialize counter */

for (i = 0; s[i] != '\0'; i++)
{
found = 0; /* reset flag for each s[i] */

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1; /* character is in accept */
break;/* no need to check further */
}
}

if (found)
count++;
else
break; /* stop at first non-matching character */
}

return (count); /* make sure we return count at the end */
}
