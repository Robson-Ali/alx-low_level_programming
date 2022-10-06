#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: array
 */

int *array_range(int min, int max)
{
	int *rob, i = 0, s = min;

	if (min > max)
		return (0);
	rob = malloc((max - min + 1) * sizeof(int));

	if (!rob)
		return (0);
	while (i < max - min)
		rob[i++] = s++;
	return (rob);
}
