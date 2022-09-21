#include "main.h"

/**
 * _strncpy - c funtion that copies a strin including the
 * terminating null byte. using at most an inputted number of bytes.
 * if the lemgth of the source string is less than the maximum byte number
 * the reminder of the destination string is filled with null bytes
 * @dest: buffer storing the string copy
 * @src: string source
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
