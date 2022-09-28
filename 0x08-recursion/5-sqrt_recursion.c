#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @i: integer
 * @n: integer
 *
 * Return: _sqrt_recursion
 */

int _sqrt_recursion(int n, int i)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_sqrt_recursion(i + 1, n));

	else if (i * i == n)
		return (i);

	return (-1);

	return (-1);
}
