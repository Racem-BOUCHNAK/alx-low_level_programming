#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point of the code
* source code start
*the required work
* Return: Always 0 (Success)
*/
int main(void)
{
char a, b;
for (a = 'a'; a <= 'z'; a++)
putchar(a);
for (b = 'A'; b <= 'Z'; b++)
putchar(b);
putchar('\n');
return (0);
}
