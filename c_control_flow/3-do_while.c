/*
 * File: 3-do_while.c
 */

#include <stdio.h>

/**
 * main - demonstration of do while loop
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	do
	{
		printf("%d\n", i);
		i++;
	}
	while (i < 10);

	return (0);
}
