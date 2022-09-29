#include "main.h"

int real_root(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_root(n, 0));
}

/**
 * real_root -finds the natural sqrt of a number
 * @n: number to be evaluated
 * @i: counter
 *
 * Return: sqrt
 */

int real_root(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (real_root(n, i + 1));
}
