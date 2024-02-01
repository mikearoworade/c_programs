/*
 * File: 5-main.c
 */

#include "main.h"

/**
 * main - check your code
 *
 * Return: Always 0
 */
int main(void)
{
	 int r;

	r = _abs(-1);
	printf("%d\n", r);

	r = _abs(0);
	printf("%d\n", r);

	r = _abs(1);
	printf("%d\n", r);

	r = _abs(-98);
	printf("%d\n", r);

	return (0);
}
