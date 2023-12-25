#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*int_index- entry point of the code
*@array: string
*@size: int
*@cmp: function
*Return: void
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (!array || !cmp || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
