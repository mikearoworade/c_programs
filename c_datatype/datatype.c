/*
 * File: datatype.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
 * main - prints the size of various data types based on the
 * computer it is compiled and run on..
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Storage size for char : %lu \n", sizeof(char));
	printf("Storage size for int : %lu \n", sizeof(int));
	printf("Storage size for long int : %lu \n", sizeof(long int));
	printf("CHAR_BIT    :   %d\n", CHAR_BIT);
	printf("CHAR_MIN    :   %d\n", CHAR_MIN);
	printf("CHAR_MAX    :   %d\n", CHAR_MAX);
	printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
	printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
	printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
	printf("SHRT_MIN    :   %d\n", SHRT_MIN);
	printf("SHRT_MAX    :   %d\n", SHRT_MAX);
	printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
	printf("INT_MIN     :   %d\n", INT_MIN);
	printf("INT_MAX     :   %d\n", INT_MAX);
	printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
	printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
	printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
	printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
	printf("\n\n");
	printf("Storage size for float : %lu \n", sizeof(float));
	printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
	printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
	printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
	printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
	printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
	printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
	printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
	printf("Precision value: %d\n", FLT_DIG );

	return (0);
}

