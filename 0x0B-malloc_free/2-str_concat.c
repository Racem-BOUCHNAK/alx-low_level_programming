#include "main.h"
#include <stdlib.h>
/**
*str_concat - entry point of the code
*@s1:var
*@s2:var
* Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
int a = 0, b = 0;
int i, j;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[a] != '\0')
a++;
while (s2[b] != '\0')
b++;
s = malloc((a *sizeof(char)) + ((b + 1) * sizeof(char)));
if (s == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
s[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
{
s[i] = s2[j];
i++;
}
s[i] = '\0';
return (s);
}
