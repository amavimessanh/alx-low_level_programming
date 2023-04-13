#include "main.h"
/**
 * create_file - creates a file.
 *
 * @text_content: A pointer to the name
 * @filename: A pointer to a string .
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, ltxt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ltxt = 0; text_content[ltxt];)
			ltxt++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, ltxt);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
