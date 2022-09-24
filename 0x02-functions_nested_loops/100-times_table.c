#include "main.h"

/**
 * print_times_table - Prints a multiplication table
 * @n: The number to be inputted
 *
 * Return: time table
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z > 99)
				{
					putchar(',');
					putchar(' ');
					putchar((z / 100) + '0');
					putchar(((z / 10) % 10) + '0');
					putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					putchar(',');
					putcchar(' ');
					putchar(' ');
					putchar(((z / 10) % 10) + '0');
					putchar((z % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					putchar(z + '0');
				}
			}
			putchar('\n');
		}
	}
}
