#include "main.h"

/**
 * is_prime - return 1 if n is prime
 * @n: number to be checked
 * @start: number to start checking from
 *
 * Return: returns 1 if n is prime, otherwise 0
 */

int is_prime(int n, int i)
{
	int start;
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}

/**
 * is_prime_number - return 1 if n is prime
 * @n: number to be checked
 * @start: number to start checking from
 * Return: returns 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	int start;
	if (start = n / 2)

	if (n <= 1)
		return (0);

	return(is_prime(n, start));
}
