#include "main.h"

/**
 * is_prime_number - return 1 if n is prime
 * @n: number
 *
 * Return: returns 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if i = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, i));
}

/**
 * is_prime - return 1 if n is prime
 * @n: number
 * @i: number to start checking for
 *
 * Return: returns 1 if n is prime, otherwise 0
 */

int is_prime(int n, int i)
{
	if (i <= 1)
		return (1);
	else if (n % i == 0)
		return (0)
	return (is_prime(n, i - 1));
}
