#include <stdio.h>

/**
 * main - Prints name of program.
 *
 * @argc: Number of arguments passed on the CLI.
 * @argv: Array of pointers to string arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
