/*
 * File: 16-print_square.c
 */

#include "main.h"

/**
 * print_square - print square based on passed value
 * @n: passed value
 *
 * Return: Nothing
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
