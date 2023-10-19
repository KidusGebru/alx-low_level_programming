#include <stdio.h>

/**
 * run_first - Runs before the main funtion to print a message
 *
 * Return: Always void
 */

__attribute__((constructor)) void run_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
