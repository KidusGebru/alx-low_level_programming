#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts string to an integer
 * @s: the src string
 *
 * Return: Void
 */

int _atoi(char *s)
{
	int num, k, j = 0, sign = 1, i = 0, discard = 0;
	char ch;
	unsigned res = 0, mul = 1;

	while (*(s + i) != '\0')
		i++;

	for (j = --i; j >= 0; j--)
	{
		ch = *(s + j);
		if ((ch >= '0' && ch <= '9') || ch == '-')
		{
			if (ch == '-')
				sign *= -1;
			else
			{
				num = 0;
				if (discard == 1)
				{
					sign = mul = 1;
					res = discard = 0;
				}

				for (k = '0'; k <= '9'; k++)
				{
					if (k == ch)
					{
						res += mul * num;
						mul *= 10;
						break;
					}
					num++;
				}
			}
		}
		else if (ch != '+' && ch != ' ')
		{
			discard = 1;
		}
		printf("[%c]{%d}, ", ch, sign * res);
	}
	printf("\n\n");
	return (sign * res);
}
