#include "main.h"

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

/* find end of dest */
while (dest[i] != '\0')
{
        i++;
}

/* append src to dest */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* add null terminator */
dest[i] = '\0';

#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    /* find end of dest */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* append src to dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* add null terminator */
    dest[i] = '\0';

    return (dest);
}#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    /* find end of dest */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* append src to dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* add null terminator */
    dest[i] = '\0';

    return (dest);
}return (dest);
}
