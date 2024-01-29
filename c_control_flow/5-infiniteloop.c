/*
 * File: 5-infiniteloop.c
 */

#include <stdio.h>

/**
 * main - demonstration of infinite loop
 *
 * Return: Always 0
 */
int main(void)
{
	for (; ;)
	{
		printf("This loop will run forever.\n");
	}

	return (0);
}
