#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: pointer array
 * @size: size of the array
 * Return: two integers
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, p;

	sum1 = 0;
	sum2 = 0;

	for (p = 0; p < size; p++)
	{
		sum1 = sum1 + a[p * size + p];
	}
	for (p = size - 1; p >= 0; p--)
	{
		sum2 += a[p * size + (size - p - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
