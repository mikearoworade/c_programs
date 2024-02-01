/*
 * File: 5-abs.c
 */

#include "main.h"

/**
 * _abs - make an integer absolute
 * @num: number to check
 *
 * Return: absolute value of an integer
 */
int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
