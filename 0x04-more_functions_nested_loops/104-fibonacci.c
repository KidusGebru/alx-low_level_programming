#include <stdio.h>
#include <limits.h>
#include <inttypes.h>
/**
 * main - Prints the first 98 fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	int i;
	__uint128_t curr, prev, prevprev;

	prevprev = 1;
	prev = 2;

	// printf("%lld, %lld, ", prevprev, prev);
	print_u128_u(prevprev);
	for (i = 2; i < 98; i++)
	{
		curr = prev + prevprev;
		prevprev = prev;
		prev = curr;
		//printf("%lld", curr);
		print_u128_u(curr);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	//printf("%lld\n", ULLONG_MAX - 1);
	return (0);
}

