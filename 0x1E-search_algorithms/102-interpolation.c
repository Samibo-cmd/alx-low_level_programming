#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double y;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		y = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + y);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}
	return (-1);
}
