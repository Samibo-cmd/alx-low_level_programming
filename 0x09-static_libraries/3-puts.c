#include "main.h"

/**
 * _puts - prints string
 * @str: pass in a string
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
