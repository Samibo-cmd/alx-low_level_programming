#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int d;
	float floatType;

	/* sizeof evaluates the size of a variables */

printf("Size of char: %lu byte\n", (unsigned long)sizeof(charType));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(intType));
printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(longIntType));
printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(d));
printf("Size of float: %lu bytes\n", (unsigned long)sizeof(floatType));
return (0);
}

