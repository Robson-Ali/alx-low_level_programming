#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed into it.
 * @argc: counts arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
