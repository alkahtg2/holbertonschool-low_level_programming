#include "main.h"

/**
* leet - encodes a string into 1337
* @s: string to encode
*
* Description: Replaces letters a/A->4, e/E->3, o/O->0, t/T->7, l/L->1
*
* Return: pointer to the resulting string
*/

char *leet(char *s)
{
int i = 0;
int j;

char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

while (s[i] != '\0')
{
j = 0;
while (letters[j] != '\0')
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
}
j++;
}
i++;
}

return (s);
}
