#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 *
 * Return: 0 if big endian, 1 if small
 */
int get_endianness(void)
{
unsigned int x = 0x01;
char *c = (char *) &x;
if (*c == 0x01)
return (1);
else
return (0);
}
