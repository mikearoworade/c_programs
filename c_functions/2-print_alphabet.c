/*
 * File: 2-print_alphabet.c
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all alphabet in lowercase, followed by newline.
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
}
