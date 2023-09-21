#include "main.h"
/**
 * cap_string - Changes lower to upper case letter in str
 * @str: The string
 *
 * Return: Void
 */

char chkSep(char *seps, char ch)
{
	char gotOne = 0;
	int i = 0;

	while (*(seps + i) != '\0')
	{
		if (*(seps + i) == ch)
		{
			gotOne = 1;
			break;
		}
		i++;
	}
	return (gotOne);
}

char *cap_string(char *str)
{
	char *seps = "	 \n,;.!?\"(){}";
	int i = 0;
	char capitalize = 0;
	char gotOne = 0;

	while (*(str + i) != '\0')
	{
		gotOne = chkSep(seps, *(str + i));
		if (capitalize == 1)
		{
			if (*(str + i) >= 'a' && *(str + i) <= 'z')
				*(str + i) = 'A' + (*(str + i) - 'a');
			if (gotOne == 0)
				capitalize = 0;
		}
		else
		{
			if (gotOne == 1)
			{
				capitalize = 1;
				gotOne = 0;
			}
		}
		i++;
	}

	return (str);
}

