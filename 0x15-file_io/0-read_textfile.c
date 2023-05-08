#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: file to be read from
 * @letters: the number of letters to be read and printed
 * Return: a string.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mem;
	ssize_t pro, y, z;

	pro = open(filename, O_RDONLY);
	if (pro == -1)
		return (0);
	mem = malloc(sizeof(char) * letters);
	y = read(pro, mem, letters);
	z = write(STDOUT_FILENO, mem, y);

	free(mem);
	close(pro);
	return (z);
}
