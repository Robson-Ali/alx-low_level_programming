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
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(',');
					_putcchar(' ');
					_putchar(' ');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}
