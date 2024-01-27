/*
 * File: scanf_printf.c
 */

#include <stdio.h>
/**
 * main - read input from stdin and scan according to format, then print
 * speciying %s, %d, %c, %f, etc., for string, int, charand float respectively.
 *
 * Return: Always 0.
 */
int main(void)
{
	char name[100];
	int age;

	printf("Enter name and age: ");
	scanf("%s %d", name, &age);

	printf("My name is %s, I'm %d years old.", name, age);

	return (0);
}
