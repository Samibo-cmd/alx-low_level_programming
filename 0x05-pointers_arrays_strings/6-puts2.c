#include "main.h"
#include <string.h>

/**
 * puts2 - prints ever character of a string
 * @str: pass in a string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int y = 0;
	int p = 0;
	char *s = str;
	int j;

	while (*s != '\0')
	{
		s++;
		y++;
	}
	p = y - 1;
	for (j = 0; j <= p; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
