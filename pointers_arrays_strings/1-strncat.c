#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

/* move i to end of dest */
while (dest[i] != '\0')
{
i++;
}

/* copy at most n characters from src */
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}

/* null terminate */
dest[i] = '\0';

return (dest);
}
