/*
 * File: 8-times_table.c
 */

#include "main.h"

/**
 * print_times_table - display times table based on a certein number
 * @n: 0 to n number
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int num1, num2;

	if (n >= 0 && n < 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				if (num2 == 0)
					printf("%d,", num1 * num2);
				else if (num2 == n)
					printf("%4d", num1 * num2);
				else
					printf("%4d,", num1 * num2);
			}
			putchar('\n');
		}
	}
}
