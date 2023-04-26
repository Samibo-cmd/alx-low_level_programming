#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, fib = 1;

	for (i = 0; i <= 50; i++)
	{
		if (i < 2)
			printf("%d, ", fib[i]);
		else
		{
			fib[i] += fib[i-1];
			if (i == 50)
				printf(
			printf("%d, ", fib[i]);
		}

