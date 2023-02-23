#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: an integer value 0
 */

void print_alphabet_x10(void)
{
	char alp[26];
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(alp[j]);
		}
		_putchar('\n');
	}
}
