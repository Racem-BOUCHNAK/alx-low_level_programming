#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - entry point of the code
*@separator:var
*@n:var
*@...:var
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list x;
unsigned int i;
va_start(x, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(x, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(x);
}
