#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - entry point of the code
*@width:var
*@height:var
* Return: Always 0 (Success)
*/
int **alloc_grid(int width, int height)
{
int **a;
int i = 0, j;
if (width == 0 || height == 0)
return (NULL);
a = (int **) malloc(sizeof(int *) * height);
if (a != NULL)
{
for (; i < height; i++)
{
a[i] = (int *) malloc(sizeof(int) * width);
if (a[i] != NULL)
{
for (j = 0; j < width; j++)
a[i][j] = 0;
}
else
{
while (i >= 0)
{
free(a[i]);
i--;
}
free(a);
return (NULL);
}
}
return (a);
}
else
{
return (NULL);
}
}
