#include <stdlib.h>
#include "dog.h"
/**
* new_dog - entry point of the code
* @name:var
* @age:var
* @owner:var
* Return: a
*/
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int x, y, i;
dog_t *a;
if (!name || !owner)
return (NULL);
a = malloc(sizeof(dog_t));
if (!a)
return (NULL);
for (x = 0; name[x]; )
x++;
x++;
a->name = malloc(x *sizeof(char));
if (!(a->name))
{
free(a);
return (NULL);
}
for (i = 0; i < x; i++)
a->name[i] = name[i];
a->age = age;
for (y = 0; owner[y]; )
y++;
y++;
a->owner = malloc(y *sizeof(char));
if (!(a->owner))
{
free(a->name);
free(a);
return (NULL);
}
for (i = 0; i < y; i++)
a->owner[i] = owner[i];
return (a);
}
