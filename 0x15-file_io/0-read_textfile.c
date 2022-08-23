#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters it should read and print.
 * Return: If the function fails or filename is NULL - 0.
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s, t, r;
	char *fp;

	if (filename == NULL)
		return (0);

	fp = malloc(sizeof(char) * letters);
	if (fp == NULL)
		return (0);

	s = open(filename, O_RDONLY);
	t = read(s, fp, letters);
	r = write(STDOUT_FILENO, fp, t);

	if (s == -1 || t == -1 || r == -1 || r != t)
	{
		free(fp);
		return (0);
	}

	free(fp);
	close(s);

	return (r);
}
