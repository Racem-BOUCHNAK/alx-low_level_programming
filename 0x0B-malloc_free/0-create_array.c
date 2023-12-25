#include <stdlib.h>
#include "main.h"
/**
*create_array - entry point of the code
*@size:var
*@c:var
* Return: Always 0 (Success)
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;
if (size == 0)
return (NULL);
a = malloc(size * sizeof(char));
if (a == NULL)
return (NULL);
for (i = 0; i < size; i++)
a[i] = c;
return (a);
}
