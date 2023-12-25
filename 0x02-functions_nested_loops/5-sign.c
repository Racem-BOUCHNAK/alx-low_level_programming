#include "main.h"
/**
*print_sign - entry point of the code
*@n: is var
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
