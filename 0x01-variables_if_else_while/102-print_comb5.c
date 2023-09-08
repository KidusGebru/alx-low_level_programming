#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g1, g2, g3, g4, g11, g12, g21, g22;

	g11 = g12 = g21 = 48;
	g22 = 49;
	for (g1 = g11; g1 <= 57; g1++)
	{
		for (g2 = g12; g2 <= 57; g2++)
		{
			for (g3 = g21; g3 <= 57; g3++)
			{
				for (g4 = g22; g4 <= 57; g4++)
				{
					if (g1 == g3 && g2 == g4)
						continue;
					putchar(g1);
					putchar(g2);
					putchar(32);
					putchar(g3);
					putchar(g4);
					if (!(g1 == 57 && g2 == 56 && g3 == 57 &&  g4 == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
				g22 = 48;
			}
			g21 = g1;
			g22 = g2 + 2;
		}
		g12 = 48;
	}

	putchar(10);
	return (0);
}
