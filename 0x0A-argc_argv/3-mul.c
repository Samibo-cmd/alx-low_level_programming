#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of argument
 * @argv: arrays of argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int result, num1, num2, i = 0;

	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			result = num1 * num2;
		}
	}
	printf("%d\n", result);
	return (0);
}

