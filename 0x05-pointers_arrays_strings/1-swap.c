#include "main.h"
/**
*swap_int - entry point of the code
*@a: pointer
*@b: pointer
* Return: Always 0 (Success)
*/
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
