#include "main.h"

/**
 * _strlen - function that returns the lenght
 * of the string
 * @s: string length
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}





/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: 0 on faliure or 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
