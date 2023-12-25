#include "main.h"
/**
*print_rev - entry point of the code
*@s:pointer
* Return: Always 0 (Success)
*/
void print_rev(char *s)
{
int x = 0;
int i;
while (*s != '\0')
{
x++;
s++;
}
s--;
for (i = x; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

