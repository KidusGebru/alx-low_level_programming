#include "main.h"
#include <stdlib.h>

/**
 * _cexit - Prints error and exits
 *
 * Return: Void
 */

void _cexit(void)
{
	char *msg = "Error";
	int i = 0;

	while (msg[i] != '\0')
	{
		_putchar(msg[i]);
		i++;
	}
	_putchar('\n');
	exit(98);
}

/**
 * _checkDigit - Checks the digits of both args
 * @arr: Input strings
 * @begs: Number start position
 * @ends: Length of strings
 * @ac: Argument count
 *
 * Return: Void
 */

void _checkDigit(char *arr[], unsigned int begs[], unsigned int ends[], int ac)
{
	unsigned int i = 0;
	int sig = 0;

	while (arr[ac][i] != '\0')
	{
		if (arr[ac][i] >= '0' && arr[ac][i] <= '9')
		{
			if (arr[ac][i] > '0' && sig == 0)
			{
				sig = 1;
				begs[ac - 1] = i;
			}
		}
		else
			_cexit();
		i++;
	}
	ends[ac - 1] = --i;
}

/**
 * _multiply - Multiplies both numbers
 * @trim: Number start position
 * @len: Length of strings
 *
 * Return: Pointer to location in memory of result
 */

char *_multiply(unsigned int trim[], unsigned int len[])
{
	char *res;
	unsigned int sh_cnt, res_len = (len[0] - trim[0]) + (len[1] - trim[1]) + 2;

	res = malloc(sizeof(*res) * res_len);
	if (res == NULL)
		_cexit();

	for (sh_cnt = 0; sh_cnt < res_len - 1; sh_cnt++)
		res[sh_cnt] = '0' + sh_cnt % 10;

	res[sh_cnt] = '\0';
	return (res);
}

/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Input strings
 *
 * Return: Void
 */

int main(int argc, char *argv[])
{
	unsigned int trim[2], len[2], i = 0;
	char *result;

	if (argc != 3)
		_cexit();

	_checkDigit(argv, trim, len, 1);
	_checkDigit(argv, trim, len, 2);

	if ((len[0] - trim[0]) > (len[1] - trim[1]))
		result = _multiply(trim, len);
	else
		result = _multiply(trim, len);

	while (result[i] != '\0')
	{
		_putchar(result[i]);
		i++;
	}
	_putchar('\n');
	free(result);
	return (0);
}

