#include "main.h"

/**
 * print_last_digit - function that prints the print_last_digit
 * @n: is the int that will be used for the argument of a function
 * Return: Value of the last digit
 */

int print_last_digit(int )
{
	int last_digit = n % 5;

	if (last_digit < 0)
		last_digit = -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
