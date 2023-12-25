#include <stdlib.h>
#include "dog.h"
/**
*free_dog - entry point of the code
*@d:var
* Return: void
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
