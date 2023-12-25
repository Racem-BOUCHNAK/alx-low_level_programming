#include "main.h"
/**
*_sqrt_recursion - entry point of the code
*@n:var
* Return: i or -1 (Success)
*/
int _sqrt_recursion(int n)
{
return (root(n, 1));
}
/**
 *root - entry point of the code
*@n:var
*@i:var
* Return: i or -1 (Success)
*/

int root(int n, int i)
{
if (n < 0)
return (-1);
if ((i * i) > n)
return (-1);
if (i * i == n)
return (i);
return (root(n, i + 1));
}
