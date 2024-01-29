/*
 * File: print_tebahpla.c
 */

#include <stdio.h>

/**
 * main - print alphabets in reverse order
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
