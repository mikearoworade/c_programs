/*
 * File: digit_comb.c
 */

#include <stdio.h>

/**
 * main - print all possible combination of single digit number followed by ','
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 9)
		{
			putchar((num % 10) + '0');
			break;
		}
		putchar((num % 10) + '0');
		putchar(',');
	}
	putchar('\n');

	return (0);
}
