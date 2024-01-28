/*
 * File: static.c
 */

#include <stdio.h>
/* Function Declaration */
void func(void);

/* global static variable */
static int count = 5;

/**
 * main - decrement variable on function call.
 *
 * Return: Always 0
 */
int main(void)
{
	while (count--)
	{
		func();
	}

	return (0);
}

/* Function Definition */
/**
 * func - increment static variable on func call.
 *
 * Return: Nothing.
 */
void func(void)
{
	/* local static variable */
	static int i = 5;

	i++;

	printf("i is %d and count is %d\n", i, count);
}
