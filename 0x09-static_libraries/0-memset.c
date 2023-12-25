#include "main.h"
/**
*_memset - entry point of the code
*@s:var
*@b:var
*@n:var
* Return: s (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
