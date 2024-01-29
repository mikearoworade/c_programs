/*
 * File: 13-print_alphabets_except.c
 */

#include <stdio.h>

/**
 * main - print all alphabet except e and q in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		else
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
