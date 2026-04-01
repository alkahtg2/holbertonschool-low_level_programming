#include "main.h"
#include <unistd.h>

/**
* main - prints "_putchar"
*
* Return: 0 (Success)
*/
int main(void)
{
char *str = "_putchar\n";
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

return (0);
}

/**
* _putchar - writes a character to stdout
* @c: The character to print
*
* Return: 1 on success, -1 on error
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}
