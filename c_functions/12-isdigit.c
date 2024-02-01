/*
 * File: 12-isdigit.c
 */

#include "main.h"

/**
 * _isdigit - check if input is digit
 * @n: value to check
 *
 * Return: 1 if digit, otherwise 0.
 */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}
