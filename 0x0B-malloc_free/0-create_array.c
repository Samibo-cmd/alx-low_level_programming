#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and asign a char to it.
 * @size: size of the array
 * @c: a charater data type
 * Return: a string.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
