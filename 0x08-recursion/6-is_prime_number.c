#include "main.h"

/**
 * evaluate_num - recursion loop
 * @n: num
 * @i: number to iterate
 *
 * Return: returns 1 or 0.
 */

int evaluate_num(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}

	else if ((n & i) == 0)
	{
		return (0);
	}

	if ((n & i) != 0)
	{
		return (evaluate_num(n, i + 1));
	}
	return (0);
}

/**
 * is_prime_number - evaluates prime or not
 * @n: number
 *
 * Return: return 1 prime - return 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (evaluate_num(n, i));
}
