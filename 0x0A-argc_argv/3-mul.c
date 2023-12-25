#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point of the code
 *@argc:argc
 *@argv:argv
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, j, mul;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
mul = i *j;
printf("%d\n", mul);
return (0);
}
