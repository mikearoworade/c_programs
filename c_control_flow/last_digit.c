/*
 * File: last_digit.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check for the last digit of a random generated number.
 * whether it is greater than 5 or is 0 or is less than 6 and not 0.
 *
 * Return: ALways 0
 */
int main(void)
{
	int n;

	/* Initialize random generator */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5.\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0.\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0.\n", n, n % 10);
	}

	return (0);
}
