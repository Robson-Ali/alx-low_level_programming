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
	int i, j. t, k = 0, z = 0;

	for (i = 0; i < size; i++)
	{
		t = (i * size) + i;
		k += *(a + t);
	}
	for (j = 0; j < size; j++)
	{
		t = (j * size) + (size - k - j);
		z += *(a + t);
	}
	printf("%i, %i\n", k, z);
}
