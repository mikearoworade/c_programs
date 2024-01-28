/*
 * File: constant.c
 */

#include <stdio.h>

#define LENGTH 10
#define WIDTH 5

/**
 * main - const using #define preprecessor and const
 *
 * Return: Always 0
 */
int main(void)
{
	const char NEWLINE = '\n';
	int area;

	area = LENGTH * WIDTH;
	printf("Area = %d", area);
	printf("%c", NEWLINE);

	return (0);
}
