#include "main.h"

/**
 *_isalpha - function to check for if c is letter, lowercase or uppercase 
 * @c: is the int that will be used for the argument of a function
 * Return: always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
