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

count = 0; /* initialize the counter */

for (i = 0; s[i] != '\0'; i++)
{
int found = 0; /* flag to check if s[i] is in accept */

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1; /* character found in accept */
break; /* no need to check remaining accept */
}

if (found)
count++;
else
break; /* stop when character not in accept */
}

return (count);
}
