/*
 * File: 12-print_alphabets_lower_upper.c
 */

#include <stdio.h>

/**
 * main - print alphabets in lowercase, then in uppercase.
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
