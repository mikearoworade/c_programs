/*
 * File: 1-max_num.c
 */

#include <stdio.h>

/* Function Declaration*/
int max(int a, int b);

/**
 * main - implement the max function and display to screen
 *
 * Return: Always 0
 */
int main(void)
{
	int n1, n2;

	n1 = 30;
	n2 = 27;

	printf("The maximum number between %d and %d is %d.\n", n1, n2, max(n1, n2));

	return (0);
}

/**
 * max - receives two integer and return max between both.
 * @num1: first number
 * @num2: second number
 *
 * Return: max num.
 */
int max(int num1, int num2)
{
	/* local variable declaration */
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return (result);
}
