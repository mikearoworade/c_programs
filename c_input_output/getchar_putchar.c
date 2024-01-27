/*
 * File: getchar_putchar.c
 */

#include <stdio.h>
/**
 * main - get(read) next available character and put passed character on screen
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	printf("Enter a value: ");
	c = getchar();

	printf("\nYou entered: ");
	putchar(c);

	return (0);
}
