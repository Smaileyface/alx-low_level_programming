#include "main.h"

/**
 * append_text_to_file - Append the required text.
 * @filename: A pointer to the file name.
 * @text_content: String added to end of the file
 *
 * Return: Unsuccessful or failure NULL - -1.
 *         File is not in existence or user has no persmission to write - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
