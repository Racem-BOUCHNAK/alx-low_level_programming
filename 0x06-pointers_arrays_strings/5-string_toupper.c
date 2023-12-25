#include "main.h"
/**
*string_toupper - entry point of the code
*@str:var
* Return: Always 0 (Success)
*/
char *string_toupper(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
i++;
}
return (str);
}

