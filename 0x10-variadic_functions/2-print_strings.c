#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - entry point of the code
*@separator:var
*@n:var
*@...:var
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list x;
char *c;
unsigned int i;
va_start(x, n);
for (i = 0; i < n; i++)
{
c = va_arg(x, char *);
if (c == NULL)
printf("(nil)");
else
printf("%s", c);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(x);
}
