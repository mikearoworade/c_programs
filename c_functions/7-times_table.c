/*
 * 7-times_table.c
 */

#include "main.h"

/**
 * times_table - display times table from 0 to 12
 *
 * Return: Always 0
 */
void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 12; num1++)
	{
		for (num2 = 0; num2 <= 12; num2++)
		{
			if(num2 == 0)
				printf("%d,", num1 * num2);
			else if(num2 == 12)
				printf("%4d", num1 * num2);
			else
				printf("%4d,", num1 * num2);
		}
		putchar('\n');
	}
}
