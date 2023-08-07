#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: the text
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int f, i;

	if (!filename)
		return (-1);

	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (i = 0; *(text_content + i) != '\0'; i++)
		;

	write(f, text_content, i);
	close(f);
	return (1);
}
