#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_iterator- entry point of the code
*@array: string
*@size: function
*@action: function
*Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
