/*
 * File: 9-print_to_98.c
 */

#include "main.h"

/**
 * print_to_98 - print from n to 98.
 * @n: the start number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("%d\n", i++);
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
		printf("%d\n", i--);
	}
	putchar('\n');
}
