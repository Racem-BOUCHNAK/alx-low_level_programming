#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - entry point of the code
*@n: var
*@...: var
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list x;
unsigned int i, sum = 0;
va_start(x, n);
for (i = 0; i < n; i++)
sum += va_arg(x, int);
va_end(x);
return (sum);
}
