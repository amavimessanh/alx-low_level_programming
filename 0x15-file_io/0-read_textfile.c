#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: A pointer to the name of the file.
 * @letters: size letters
 *
 * Return: the actual number of letters it could read and print
 *		return 0 if the file can not be opened or read
 *		return 0 if filename is NULL return 0 if write
 *		fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
