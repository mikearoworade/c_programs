/*
 * File: 19-prime_factor.c
 */

#include <stdio.h>

/* Function prototype */
int is_prime(int n);

/**
 * main - print the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, largest_factor, num = 1231952;
	int half_num = num / 2;

	for (i = 2; i <= half_num; i++)
	{
		while(1)
		{
			if ((num % i) == 0)
			{
				if(is_prime(i))
				{
					printf("%d ", i);
					num /= i;
					largest_factor = i;
					continue;
				}
				else
					break;
			}
			else
				break;
		}
	}
	printf("\nThe largest factor is %d\n", largest_factor);

	return (0);
}

/**
 * is_prime - check if prime
 * @n: number to check
 *
 * Return: 1 if true, otherwise 0.
 */
int is_prime(int n)
{
	int i, prime = 1;

	if (n == 2)
		return (prime);
	if (n > 2)
	{
		for (i = 2; i <= n / 2; i++)
		{
			if ((n % i) == 0)
			{
				prime = 0;
				break;
			}
		}
	}

	return (prime);
}
