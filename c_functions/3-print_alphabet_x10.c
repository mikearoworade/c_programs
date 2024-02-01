/*
 * File: 3-print_alphabet_x10
 */

#include <stdio.h>

/**
 * print_alphaebet_x10 - print all alphabet in lowercase 10 times.
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
	}
}
