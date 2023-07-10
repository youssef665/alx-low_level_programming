#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * at the end of the file
 * @filename: name of the file
 * @text_content: string to be added
 *
 * Return: 1 on succes or  -1 on faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int j = 0, f;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[j] != '\0')
	{
		j++;
	}

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	write(f, text_content, j);

	return (1);
}
