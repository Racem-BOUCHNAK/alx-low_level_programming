#include "main.h"
/**
*reverse_array - entry point of the code
*@a:var
*@n:var
* Return: Always 0 (Success)
*/
void reverse_array(int *a, int n)
{
int i;
int x;
for (i = 0; i < n--; i++)
{
x = a[i];
a[i] = a[n];
a[n] = x;
}
}
