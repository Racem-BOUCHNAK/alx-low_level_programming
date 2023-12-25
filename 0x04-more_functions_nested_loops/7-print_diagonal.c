#include "main.h"
/**
*print_diagonal - entry point of the code
*@n:var
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
if (n > 0)
{
int i, x;
for (i = 0; i < n; i++)
{
for (x = 0; x < n; x++)
{
if (x == i)
_putchar('\\');
else if (x < i)
_putchar(' ');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
