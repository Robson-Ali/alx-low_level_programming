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
	int index, k = 0, z = 0;

	for (index = 0; index < size; index++)
	{
		k += a[index];
		a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
		z += a[index];
		a -= size;
	}
	printf("%d, %d\n", k, z);
}
