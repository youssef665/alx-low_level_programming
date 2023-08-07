#include "main.h"

/**
 * append_text_to_file - function that append text to the end of file
 * @filename: name of file
 * @text_content: the text that will be appended
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, i;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;

	write(f, text_content, i);
	close(f);
	return (1);
}
