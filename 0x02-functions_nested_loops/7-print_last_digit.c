#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: passed in the number
 * Return: an integer value.
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	_putchar(lastDigit);
	return (lastDigit);
}
