#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit - indices start at 0.
 *
 * Return: if error ocuurs - -1
 * otherwise - value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	for ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
