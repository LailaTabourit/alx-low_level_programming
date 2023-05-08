#include "main.h"

/**
 * append_text_to_file - Appends text at d end of a file.
 * @filename: A pointer to d nam of the file.
 * @text_content: The string to add to the end of d file.
 *
 * Return: If d function fails or filename is NULL - -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int d, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	d = open(filename, O_WRONLY | O_APPEND);
	wrt = write(d, text_content, len);

	if (d == -1 || wrt == -1)
		return (-1);
	close(d);

	return (1);
}
