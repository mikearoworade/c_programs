/*
 * File: print_alphabets_lower.c
 */

#include <stdio.h>

/**
 * main - print alphabet in lowercasae.
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
