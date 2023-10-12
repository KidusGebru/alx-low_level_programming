#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _print - Prints n bytes of a function code
 * @f: The function
 * @n: Number of bytes to print
 *
 * Return: Always void
 */
void _print(int (*f)(int, char**), int n)
{
	int i = 0;
	char *func = (char *)f;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%02hhx ", *(func + i));
		else
			printf("%02hhx", *(func + i));
	}

	printf("\n");
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Argument values
 *
 * Return: Always void
 */
int main(int argc, char *argv[])
{
	int n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	_print(main, n_bytes);
	return (0);
}
