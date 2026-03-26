#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @s: string to modify
*
* Description: Capitalizes the first letter of each word.
* Separators of words are: space, tabulation, new line, ,, ;, ., !, ?,
* ", (, ), {, and }
*
* Return: pointer to the resulting string
*/

char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
else
{
if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
s[i - 1] == '}') &&
(s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
}
}
i++;
}

return (s);
}
