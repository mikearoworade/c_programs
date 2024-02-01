/*
 * File: 17-fizz_buzz.c
 */

#include <stdio.h>

/**
 * main - print the 1 to 100, replace multiple of 3 with fizz, multiple of 5
 * with bizz and multiple of 3 and 5 with fizzbuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i == 100)
			continue;
		else
			printf(" ");
	}
	putchar('\n');

	return (0);
}
