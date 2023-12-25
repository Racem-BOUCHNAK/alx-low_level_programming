#include "main.h"
#include <stdio.h>
/**
*print_diagsums - entry point of the code
*@a:var
*@size:var
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
int i = 0;
int max = size * size;
int sum1 = 0;
int sum2 = 0;
for (; i < max; i += size + 1)
sum1 += a[i];
for (i = size - 1; i < max - 1; i += size - 1)
sum2 += a[i];
printf("%d, %d\n", sum1, sum2);
}
