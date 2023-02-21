#include "main.h"

/**
 * main - print _putchar
 *
 * Return: an integer value of 0
 */

int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
