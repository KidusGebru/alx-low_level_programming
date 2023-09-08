#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	res = abs(n - (n / 10) * 10);

	if (res > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, res);
	else if (res == 0)
		printf("Last digit of %d is %d and is 0\n", n, res);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, res);
	return (0);
}
