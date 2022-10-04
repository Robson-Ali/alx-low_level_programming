#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatinate two string
 * @s1: first string
 * @s2: second string
 * Return: concatinated string of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int t, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	t = r = 0;
	while (s1[t] != '\0')
		t++;
	while (s2[r] != '\0')
		r++;

	concat = malloc(sizeof(char) * (t + r + 1));

	if (concat == NULL)
		return (NULL);
	t = r = 0;
	while (s1[t] != '\0')
	{
		concat [t] = s1[t];
		t++;
	}
	while (s2[r] != '\0')
	{
		concat [t] = s2[r];
		t++, r++;
	}
	concat[t] = '\0';
	return (concat);
}
