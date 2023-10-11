#include <stdio.h>

/**
 * main - Main entry point of calculator app
 * @argc: Number of arguments
 * @argv: Values of arguments
 *
 * Return: Always void
 */

void main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}


