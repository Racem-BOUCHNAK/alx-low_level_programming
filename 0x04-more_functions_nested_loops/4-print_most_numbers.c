#include "main.h"
/**
*print_most_numbers - entry point of the code
*the required work
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i == '2' || i == '4')
continue;
else
_putchar(i);
}
_putchar('\n');
}
