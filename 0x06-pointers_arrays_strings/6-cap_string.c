#include "main.h"
/**
*cap_string - entry point of the code
*@str:var
* Return: Always 0 (Success)
*/
char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
i++;
if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}' || i == 0)
str[i] -= 32;
i++;
}
return (str);
}
