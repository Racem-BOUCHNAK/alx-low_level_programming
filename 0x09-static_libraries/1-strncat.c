#include "main.h"
/**
 *_strncat - entry point of the code
 *@dest:var
 *@src:var
 *@n:var
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
i++;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
