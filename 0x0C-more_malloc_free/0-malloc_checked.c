#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - entry point of the code
*@b:var
* Return: ptr or 98
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
