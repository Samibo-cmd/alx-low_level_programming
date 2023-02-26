#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercas
 *
 * Return: Always 0'
 */

int main(void)
{
	int i;
	char j;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
