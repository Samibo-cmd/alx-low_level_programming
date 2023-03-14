#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: rows of the array
 * @height: column of the array
 * Return: a pointer.
 */

int **alloc_grid(int width, int height)
{
	int **two;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	two = malloc(sizeof(int *) * height);

	if (two == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		two[i] = malloc(sizeof(int) * width);

		if (two[i] == NULL)
		{
			for (; i >= 0; i--)
				free(two[i]);
			free(two);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			two[i][j] = 0;
	}
	return (two);
}
