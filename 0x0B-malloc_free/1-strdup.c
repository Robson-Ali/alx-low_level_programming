#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *array;
	int i, b = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	array = malloc(sizeof(char) * (i + 1));

	if (array == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		array[b] = str[b];

	return (array);
}
