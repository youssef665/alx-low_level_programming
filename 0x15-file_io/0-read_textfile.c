#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the posix
 * @filename: name of the file
 * @letters: letters to be printed
 *
 * Return: 0 or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(STDOUT_FILENO, b, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(b);
		return (0);
	}

	free(b);
	close(o);

	return (w);
}
