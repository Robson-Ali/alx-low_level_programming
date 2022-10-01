#include "main.h"

/**
 * _length - checks the length of a string
 * @s: string
 *
 * Return: return the length of a string
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * check_pal - checks if the string is palindome
 * @i: is the index
 * @leng: length of the string
 * @s: string
 *
 * Return: 1if it is palindrome or 0 if not
 */

int check_pal(int i, int leng, char *s)
{
	if (leng > 0)
	{
		if (s[i] == s[leng])
		{
			return (check_pal(i + 1, leng - 1, s));
		}
		else if (s[i] != s[leng])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 *
 * Return: return 1 if the string is palindrome or 0 otherwise
 */

int is_palindrome(char *s)
{
	return (check_pal(0, _length(s) - 1, s));
}
