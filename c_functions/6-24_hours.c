/*
 * File: 6-24_hours.c
 */

#include "main.h"

/**
 * jack_bauer - print every minutes of the day, starting from 00:00 to 23:59
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			putchar((hours / 10) + '0');
			putchar((hours % 10) + '0');
			putchar(':');
			putchar((minutes / 10) + '0');
			putchar((minutes % 10) + '0');
			putchar('\n');
		}
	}
}
