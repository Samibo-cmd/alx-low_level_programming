#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: pass in a string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int j;
	int l;
	char p[1000];

	l = strlen(s);

	for (j = l; j >= 0; j--)
	{
		p[l - j] = s[j - 1];
	}

	for (j = 0; j < l; j++)
	{
		s[j] = p[j];
	}
}
