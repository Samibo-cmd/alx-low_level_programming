#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments pass to the program
 * @argc: number of arguments
 * @argv: arrays of argument
 * Return: Always o.
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);

return (0);
}

