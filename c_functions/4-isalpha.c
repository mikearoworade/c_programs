/*
 * File: 4-isalpha.c
 */

#include "main.h"

/**
 * _isalpha - Check if character is alphabetic.
 * @c: Character to check
 *
 * Return: 1 if alphabetic, else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
