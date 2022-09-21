#include "main.h"

/**
 * _strncpy - c funtion that copies a string
 * @dest: string that will be appended
 * @src: string to be completed at end of dest
 * @n: max number of bytes copied
 *
 * Return: returns new copied string
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0'

	return (dest);
}
