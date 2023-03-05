#include <stdio.h>

/**
 * main - prints the sum of the multiples of 3 and 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 ++ 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
