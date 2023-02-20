#include <stdio.h>

/**
 * main - A program that prints a line to the standard error
 * Return: 1 (success)
 */
int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stdout, "%s\n", a);
	return (1);
}
