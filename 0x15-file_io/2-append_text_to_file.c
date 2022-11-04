#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: File to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k, r, e = 0;

	if (!filename)
		return (-1);

	k = open(filename, O_WRONLY | O_APPEND);
	if (k < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[e])
			e++;
		r = write(k, text_content, e);
		if (r != e)
			return (-1);
	}

	close(k);

	return (1);
}
