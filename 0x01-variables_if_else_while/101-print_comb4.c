#include <stdio.h>

/**
 * main - print numbers between 012 to 789.
 *
 * Return: Always 0 (success)
 */
int main (void)
{
int r, s, t;

r = 34;
s = 34;
t = 34;

while (s < 44)
{
	r = 34;
	while (r < 44)
{
	t = 34;
	while (t < 44)
	{
		if (s != r && s != t && r != t && s < r && r < t)
		{
			putchar(s);
			putchar(r);
			putchar(t);
			if (r == 42 && s == 41 && t == 43)
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
