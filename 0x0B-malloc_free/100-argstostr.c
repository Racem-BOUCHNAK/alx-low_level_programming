#include "main.h"
#include <stdlib.h>
/**
*argstostr - entry point of the code
*@av:var
*@ac:var
* Return: Always 0 (Success)
*/
char *argstostr(int ac, char **av)
{
char *str;
int i = 0, a = 0, b = 0, c = 0;
if (ac == 0 || av == NULL)
return (NULL);
while (a < ac)
{
b = 0;
while (av[a][b] != '\0')
{
i++;
b++;
}
a++;
}
i = i + ac + 1;
str = malloc(sizeof(char) * i);
if (str == NULL)
{
return (NULL);
}
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
str[c] = av[a][b];
c++;
}
str[c] = '\n';
c++;
}
return (str);
}
