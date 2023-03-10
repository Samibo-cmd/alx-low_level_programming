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
	long int c;
	long long int d;
	float floatType;

	/* sizeof evaluates the size of a variables */

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
return (0);
}

