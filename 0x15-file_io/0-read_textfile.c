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
	ssize_t f, l, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(text);
		return (0);
	}

	l = read(file, text, letters);

	w = write(STDOUT_FILENO, text, l);

	close(f);

	return (w);
}
