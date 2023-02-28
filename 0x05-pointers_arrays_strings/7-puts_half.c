#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: pass in a string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int a, b, lon;

	lon = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
		while (str[a] <= 5)
		{
			continue;
		}
		lon++;
		b = (lon / 2);
		
		if ((lon % 2) == 1)
		{
			b = ((lon + 1) / 2);
		}
		for (a = b; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
