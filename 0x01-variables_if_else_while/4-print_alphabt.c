#include <stdio.h>

/**
 * main - print aplhabet and skipping q and e
 *
 * Return: return 0 success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if(i == 'q' || i == 'e')
		{
			continue;
		}
		putchar("%s\n", i)
	}
	return (0);
}
