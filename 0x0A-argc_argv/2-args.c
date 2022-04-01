#include <stdio.h>

/**
 * main - Prints all arguments received including first one.
 *
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		for ( ; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
