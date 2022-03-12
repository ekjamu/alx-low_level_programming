#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Determine if a random number is positive, negative or zero.
=======
 * main - Determine if a random number is positive, negative or zerok.
>>>>>>> 6b29444baa3c17ee8cb20d3f401d614904725905
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);

}
