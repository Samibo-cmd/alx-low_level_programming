#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pass in a string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
