#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * Return: string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
