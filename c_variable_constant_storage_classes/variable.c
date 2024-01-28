/*
 * File: variable.c
 */

#include <stdio.h>

/**
 * main - variable declaration, definition and initialization
 *
 * Return: Always 0
 */

int main(void)
{
	/* Variable declaration */
	int a, b;
	int c;
	float f;
	/* Variable Definition */
	float amount = 22500.0;

	/* actual initialization */
	a = 2024;
	b = 1996;

	c = a - b;
	printf("Age: : %d \n", c);

	f = amount / 2500.0;
	printf("Average unit per day: %f\n", f);

	return (0);
}

