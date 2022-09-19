#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 *@str: string to print

 * Description: prints a string
 * Return: 0 (success)
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\n')
	{
		putchar(*(str + i));
		i++;
	}
}
