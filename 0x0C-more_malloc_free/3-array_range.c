#include "main.h"
#include <stdlib.h>
/**
*array_range - entry point of the code
*@min:var
*@max:var
* Return: Always 0 (Success)
*/
int *array_range(int min, int max)
{
int *a;
int i, x;
if (min > max)
return (NULL);
x = max - min + 1;
a = malloc(sizeof(int) * x);
if (a == NULL)
return (NULL);
for (i = 0; min <= max; i++)
a[i] = min++;
return (a);
}
