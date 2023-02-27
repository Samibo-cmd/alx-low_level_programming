#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, j, a, b;

	for (i = '0'; i < '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			a = i + j;
			b = j + i;

			if (i == j || b == a)
			{
				continue;
			}
			if (i < '8' && j < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
