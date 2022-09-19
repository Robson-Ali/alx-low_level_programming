#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * return: string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int rob = 0;
	int i;

	while (s[rob] != '\0')
		rob++;
	for (i = 0; i < rob; i++)
	{
		rob--;
		rev = s[i];
		s[i] = s[rob];
		s[rob] = rev;
	}
}
