#include "main.h"
#include <stdio.h>

/**
 * main - function that checks for uppercase character.
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
