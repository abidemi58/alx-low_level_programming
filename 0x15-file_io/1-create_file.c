#include "main.h"
/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int s, r, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	s = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(s, text_content, i);

	if (s == -1 || r == -1)
		return (-1);

	close(s);

	return (1);
}
