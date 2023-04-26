#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, j, sum = 0;

	i = 0;
	j = 1;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i != '8' && j != '9')
			{
				sum = i + j;
				putchar(sum);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
