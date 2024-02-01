/*
 * File: 14-print_line.c
 */

#include <stdio.h>
#include "main.h"

/**
 * print_line - print straight line.
 * @n: number of dash
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		putchar('_');
	putchar('\n');
}
