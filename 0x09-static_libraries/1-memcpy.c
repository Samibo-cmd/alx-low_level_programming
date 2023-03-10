#include "main.h"

/**
 * *_memcpy - copies n bytes of memory from src to dest
 * @dest: destination memory
 * @src: memory from which n bytes are copied
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
