#include <stdio.h>
#include "main.h"
/**
 *_strcpy - entry point of the code
 *@dest:pointer
 *@src:pointer
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
int i = 0, x = 0;
while (*(src + i) != '\0')
i++;
for ( ; x < i ; x++)
dest[x] = src[x];
dest[i] = '\0';
return (dest);
}
