#include "main.h"

/**
 * print_sign - function prints sign of a number
 * @c: is the int that will be used for the argument of a function
 * Return: always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
