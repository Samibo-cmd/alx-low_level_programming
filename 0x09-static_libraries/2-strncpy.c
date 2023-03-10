#include "main.h"

/**
 * *_strncpy - copies strings from one variable to another
 * @dest: receiver
 * @src: giver
 * @n: integer passed in
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
