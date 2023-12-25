#include "main.h"
/**
*_islower - entry point of the code
*@c: is a variable
* Return:  1 if right and 0 if wrong
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
