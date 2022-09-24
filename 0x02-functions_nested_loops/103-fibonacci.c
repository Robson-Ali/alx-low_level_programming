#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 *
 * Return: Nothing
 */

int main(void)
{
	int i = 0;
	long j = 1, t = 2, sum = t;

	while (t + j < 4000000)
	{
		t += j;
		if (t % 2 == 0)
			sum += t;
		j = t - j;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
