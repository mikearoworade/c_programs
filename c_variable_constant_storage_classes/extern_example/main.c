/*
 * File: main.c
 */

#include <stdio.h>

int count;
extern void write_extern(void);

/**
 * main - demonstrate extern class storage
 *	extern brings to life here write_extern that exist in support file
 *
 * Return: Always 0
 */
int main(void)
{
	count = 5;
	write_extern();

	return (0);
}
