#include "main.h"
/**
*_memcpy - entry point of the code
*@dest:var
*@src:var
*@n:var
* Return: dest (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
for (; n > 0; n--, i++)
dest[i] = src[i];
return (dest);
}
