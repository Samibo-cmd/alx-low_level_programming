#include<stdio.h>

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
	long long int longLongIntType;
	float floatType;

	/* sizeof evaluates the size of a variables */

printf("Size of char: %zu byte", sizeof(charType));
printf("Size of int: %zu bytes", sizeof(intType));
printf("Size of long int: %zu bytes", sizeof(longIntType));
printf("Size of long long int: %zu bytes", sizeof(longLongIntType));
printf("Size of float: %zu bytes", sizeof(floatType));

return (0);
}

