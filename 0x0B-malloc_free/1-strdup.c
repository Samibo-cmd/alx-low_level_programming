#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: the string copied to another string
 * Return: a new string.
 */

char *_strdup(char *str)
{
	char *proj;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	proj = malloc(sizeof(char) * (i + 1));

	if (proj == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		proj[j] = str[j];
	return (proj);
}
