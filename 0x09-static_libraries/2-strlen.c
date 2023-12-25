#include "main.h"
/**
*_strlen - entry point of the code
*@s:is a pointer
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
