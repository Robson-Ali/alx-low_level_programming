#include <stdio.h>

/**
 * main - Prints number between 00 to 99.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int r, s, t, h, opt1, opt2;

r = s = t = h = 48;
while (h < 58)
{
	t = 48;
	while (t < 58)
{
	s = 48;
	while (s < 58)
{
	r = 48;
	while (r < 58)
		{
			opt1 = (h * 10) + t;
			opt2 = (s * 10) + r;
			if (opt1 < opt2)
			{
				putchar(h);
				putchar(t);
				putchar(' ');
				putchar(s);
				putchar(r);
				if (h == 57 && t == 56 && s == 57 && r == 57)
					break;
				putchar(',');
				putchar(' ');
				}
				r++;
			}
			s++;
		}
		t++;
	}
	h++;
}
putchar('\n');
return (0);
}
