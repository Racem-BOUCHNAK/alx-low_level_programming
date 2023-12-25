#include "main.h"
/**
*wildcmp - entry point of the code
*@s1:var
*@s2:var
* Return: 1 or 0 (Success)
*/
int wildcmp(char *s1, char *s2)
{
if (!*s2  && !*s1)
return (1);
if (*s2 == '*' && *(s2 + 1)  && !*s1)
return (0);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
return (0);
}
