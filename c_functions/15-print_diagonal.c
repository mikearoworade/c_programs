/*
 * File: 15-print_diagonal.c
 */

#include "main.h"

/**
 * print_diagonal - print dashes slashes based on based value
 * @n: passed value
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j, spaces = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < spaces; j++)
				printf(" ");
			printf("\\\n");
			spaces++;
		}
	}
	else
		putchar('\n');
}
