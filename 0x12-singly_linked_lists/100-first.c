#include "lists.h"
/**
 * pre_main_function - Function that prints before main
 *
 * Return: Nothing
 */
void __attribute__ ((constructor)) pre_main_function(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
