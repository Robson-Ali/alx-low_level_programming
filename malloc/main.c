#include "main.h"

/**
 * main - call other functions
 * @argc: number of cmdline arguments
 * @argv: argument vector
 *
 * Return: always 0 unless error
 */

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("You have to enter a word\n");
		return (1);
	}

	printf("will this give us a segmentation fault?\n");
	stringArray(argv[1]);
	printf("%s\n", argv[1]);

	return (0);
}
