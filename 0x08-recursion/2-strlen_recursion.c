#include "main.h"
/**
*_strlen_recursion - entry point of the code
*@s:var
* Return: Always 0 (Success)
*/
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
