#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file to which text is to be appended
 * @text_content: the text to be appended
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, q, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	q = write(p, text_content, length);

	if (p == -1 || q == -1)
		return (-1);

	close(p);

	return (1);
}
