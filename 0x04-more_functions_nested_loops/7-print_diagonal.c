#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: pass in an integer
 * Return: an integer value
 */

void print_diagonal(int n)
{
	if  (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');

			for (j = 0; j <= i; j++)
			{
				if (i == (n - 1))
				{
					break;
				}
				_putchar(' ');
			}
		}
	}
}
