/*
 * File: if.c
 */

#include <stdio.h>
/**
 * main - check if age is greater than 25.
 *
 * Return: Always 0.
 */
int main(void)
{
	int age;

	age = 27;
	if (age >= 25)
	{
		printf("Michael, you an adult and hope you're doing well.\n");
	}
	else
	{
		printf("Keep on grinding Michael.\n");
	}

	return (0);
}
