#include "main.h"

/**
 * puts_half - prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: pass in a string
 * Return: half of input
 */

void puts_half(char *str)
{
	int a, n, length;

	length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;

	if (length % 2 == 0)
	{
		for (n = length / 2; str[n] != '\0'; n++)
			_putchar (str[n]);
	}
	if (length % 2 != 0)
	{
		for (n = (length - 1) / 2; str[n] != 0; n++)
			_putchar (str[n]);
	}
	_putchar('\n');
}
