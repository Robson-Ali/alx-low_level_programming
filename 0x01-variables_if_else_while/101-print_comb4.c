#include <stdio.h>

/**
 * main - print numbers between 012 to 789.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int r, s, t;

r = 48;
s = 48;
t = 48;

while (s < 58)
{
	r = 48;
	while (r < 58)
{
	t = 48;
	while (t < 58)
	{
		if (s != r && s != t && r != t && s < r && r < t)
		{
			putchar(s);
			putchar(r);
			putchar(t);
			if (r == 56 && s == 55 && t == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		t++;
	}
	r++;
}
s++;
}
putchar('\n');
return (0);
}
