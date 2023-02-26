#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse direction
 *
 * Return: Always 0.
 */

int main(void)
{
	char n;

	n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

