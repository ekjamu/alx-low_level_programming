#include <stdio.h>

/**
 * main - Prints number of arguments passed to it.
 *
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to string arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
