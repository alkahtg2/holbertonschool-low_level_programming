#include "main.h"

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

/* move to end of dest */
while (dest[i] != '\0')
{
i++;
}

/* append src */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* null terminate */
dest[i] = '\0';

return (dest);
}
