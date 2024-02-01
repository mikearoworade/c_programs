/*
 * 18-print_triangle.c
 */

#include "main.h"

/**
 * print_triangle - print triangle based on passed size
 * @n: triangle size
 *
 * Return: Nothing
 */
void print_triangle(int n)
{
	int i, j, k, spaces = n - 1, hash = 1;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < spaces; j++)
				putchar(' ');
			for (k = 0; k < hash; k++)
				putchar('#');
			spaces--;
			hash++;

			putchar('\n');
		}
	}
	else
		putchar('\n');
}
