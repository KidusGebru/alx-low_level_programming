#include "main.h"

/**
 * getNum - Number from char
 * @ch: The character
 *
 * Return: Number
 * */

int getNum(char ch)
{
	int i, num = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == ch)
			break;
		else
			num++;
	}
	return (num);
}

/**
 * infinite_add - Adder
 * @n1: Operand 1
 * @n2: Operand 2
 * @r: Buffer
 * @size_r: Buffer size
 *
 * Return: Pointer to buffer
 * */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carrey = 0, error = 0;
	int op1 = 0, op2 = 0, buf_size = size_r - 2;

	size_r--;
	if (size_r > 0)
	{
		*(r + size_r) = '\0';
		size_r--;
		while (size_r > 0)
		{
			*(r + size_r) = '0';
			size_r--;
		}
	}
	else
	{
		return (0);
	}

	while (*(n1 + i) != '\0')
		i++;

	while (*(n2 + j) != '\0')
		j++;

	i--;
	j--;
	size_r = buf_size;

	while (i >= 0 || j >= 0)
	{
		if (size_r >= 0)
		{
			if (i >= 0 && j >= 0)
			{
				op1 = getNum(*(n1 + i));
				op2 = getNum(*(n2 + j));

				if ((op1 + op2 + carrey) > 9)
				{
					carrey = 1;
					*(r + size_r) = ('0' + ((op1 + op2 + carrey) % 10));
				}
				else
				{
					carrey = 0;
					*(r + size_r) = ('0' + (op1 + op2 + carrey));
				}
			}
			else if (i >= 0)
			{
				op1 = getNum(*(n1 + i));
				if ((op1 + carrey) > 9)
				{
					carrey = 1;
					*(r + size_r) = ('0' + ((op1 + carrey) % 10));
				}
				else
				{
					carrey = 0;
					*(r + size_r) = *(n1 + i);
				}
			}
			else if (j >= 0)
			{
				op2 = getNum(*(n2 + j));
				if ((op2 + carrey) > 9)
				{
					carrey = 1;
					*(r + size_r) = ('0' + ((op2 + carrey) % 10));
				}
				else
				{
					carrey = 0;
					*(r + size_r) = *(n2 + j);
				}
			}
		}
		else
		{
			error = 1;
			break;
		}
		i--;
		j--;
		size_r--;
	}

	if (carrey > 0 && size_r >= 0)
	{
		*(r + size_r) = '0' + carrey;
	}
	else
	{
		error = 1;
	}

	if (error == 1)
	{
		return (0);
	}
	else
	{
		while (size_r >= 0)
		{
			*(r + size_r) = '0';
			size_r--;
		}
		return (r);
	}

}
