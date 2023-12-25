#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_name - entry point of the code
*@name: string
*@f: function
*Return: void
**/
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
