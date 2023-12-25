#include "main.h"
/**
*_strchr - entry point of the code
*@s:vatr
*@c:var
* Return:&s (Success)
*/
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0' && s[i] != c)
i++;
if (s[i] == c)
return (&s[i]);
else
return ('\0');
}

