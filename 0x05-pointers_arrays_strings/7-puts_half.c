#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints of a string
 * @str: input string
 * return: half the input
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		putchar(*str);
	}
	putchar('\n');
}
