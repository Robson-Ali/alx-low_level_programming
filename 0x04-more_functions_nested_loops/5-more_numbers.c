#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int n1, n2;

for (n1 = 0; n1 < 10; n1++)
{
for (n2 = 0; n2 < 15; n2++)
{
if (n2 >= 10)
_putchar((n2 / 10) + '0');
_putchar((n2 % 10) + '0');
}
putchar('\n');
}
}
