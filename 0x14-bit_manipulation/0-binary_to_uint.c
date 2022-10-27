#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (ui = 0; b[ui]; ui++)
	{
		if (b[ui] < '0' || b[ui] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[ui] - '0');
	}

	return (dec_val);
}
