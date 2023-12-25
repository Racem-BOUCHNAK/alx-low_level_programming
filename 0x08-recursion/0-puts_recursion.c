#include "main.h"
/**
*_puts_recursion - entry point of the code
*@s:var
* Return: void (Success)
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar (*s);
_puts_recursion(s + 1);
}
else
_putchar ('\n');
}
