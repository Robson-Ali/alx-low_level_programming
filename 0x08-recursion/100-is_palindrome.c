#include "main.h"

/**
 * is_palindrome - finds palindrome
 * @s: string to be used
 *
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks if a string is palindrome
 * @s: string to be used
 * @start: start index
 * @end: end index
 * @flag: flag to indicate string is a palindrome
 *
 * Return: voide
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}
