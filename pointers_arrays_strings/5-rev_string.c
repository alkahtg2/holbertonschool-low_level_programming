#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int len = 0, i;
char temp;

/* Calculate the length of the string */
while (s[len] != '\0')
len++;

/* Swap characters from ends toward the center */
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
