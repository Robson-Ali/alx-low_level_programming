#include "main.h"

/**
 * _strncpy - copies at most an inputted number of
 * bytes from string src into dest
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: max number of bytes copied
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
