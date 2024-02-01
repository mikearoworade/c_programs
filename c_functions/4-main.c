/*
 * File: 4-main.c
 */

#include "main.h"

/**
 * main - Check your code.
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = _isalpha('A');
	putchar(r + '0');

	r = _isalpha('y');
	putchar(r + '0');

	r = _isalpha(111);
	putchar(r + '0');

	r = _isalpha(';');
	putchar(r + '0');

	r = _isalpha(3);
	putchar(r + '0');

	return (0);
}

