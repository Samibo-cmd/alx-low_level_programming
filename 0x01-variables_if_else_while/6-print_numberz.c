#include <stdio.h>

/**
 * main - Print single digit numbers of base 10
 *
 * Return: return integer value of 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
