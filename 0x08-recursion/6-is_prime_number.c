#include "main.h"
/**
 *is_prime_number - entry point of the code
*@n:var
* Return: 1 or 0 (Success)
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prim(n, n - 1));
}
#include "main.h"
/**
*prim - entry point of the code
*@n:var
*@i:var
* Return: 1 or 0 (Success)
*/
int prim(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (prim(n, i - 1));
}
