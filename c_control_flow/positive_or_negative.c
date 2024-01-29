/*
 * File: positive_or_negative
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check if a random generated number is positive, negative or zero
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	/* Initialize random number generator*/
	srand(time(0));
	/*RAND_MAX = 2147483647 */
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is greater than 0.\n", n);
	}
	else if (n < 0)
	{
		printf("%d is less than 0.\n", n);
	}
	else
	{
		printf("%d is equal to 0.\n", n);
	}

	return (0);
}
