#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number - determines if an integer is a prime number or not
 * @n: the integer checked
 * Return: 1 if n is a prime number or 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if a number is prime recursively
 * @n: the number considered
 * @i: iterator
 * Return: 1 if n is prime or 0 if it is not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
