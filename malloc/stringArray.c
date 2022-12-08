#include "main.h"

/**
 * stringArray - declares string using array syntax
 * @str: string to be manipulated
 */

void stringArray(char *str)
{
	char s[100];
	int i;

	i = 0;
	while (*str != '\0')
	{
		s[i] = *str;
		str++;
		i++;
	}
	s[0] = 'H';
}
