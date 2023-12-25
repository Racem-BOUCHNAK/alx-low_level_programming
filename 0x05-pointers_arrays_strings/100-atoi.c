#include "main.h"
/**
 *_atoi - entry point of the code
 *@s:pointer
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int x = 0;
char y = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
{
y = 1;
x = x * 10 + *s - '0';
}
else if (y)
break;
s++;
}
if (sign < 0)
x = (-x);
return (x);
}
