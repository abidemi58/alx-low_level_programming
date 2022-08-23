#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int s, r, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	s = open(filename, O_WRONLY | O_APPEND);
	r = write(s, text_content, i);

	if (s == -1 || r == -1)
		return (-1);

	close(s);

	return (1);
}
