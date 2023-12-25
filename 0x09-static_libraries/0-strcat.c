#include "main.h"
/**
 *_strcat - entry point of the code
 *@dest:var
 *@src:var
 *the required work
 * Return: Always dest (Success)
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
