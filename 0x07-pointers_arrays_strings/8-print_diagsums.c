#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k = 0, z = 0;

	for (i = 0; i < size; i++)
	{
		k += a[i];
		a += size;
	}
	a -= size;

	for (j = 0; j < size; j++)
	{
		z += a[j];
		a -= size;
	}

	printf("%d, %d\n", k, z);
}
