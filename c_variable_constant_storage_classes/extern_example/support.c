/*
 * File: support.c
 */

#include <stdio.h>

extern int count;

/**
 * write_extern - demonstrate extern variable
 *
 * Return: Nothing
 */
void write_extern(void)
{
	printf("count is %d\n", count);
}
