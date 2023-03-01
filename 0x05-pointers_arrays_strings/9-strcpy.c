#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed by src
 * @dest: pass first value
 * @src: pass in second value
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
