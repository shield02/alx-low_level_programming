#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: const char, name of file
 * @text_content: char, NULL terminated string
 *
 * Description: This function appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int nbytes = 0;
	int fhandle, wpt;

	if (filename == NULL)
		return (-1);

	fhandle = open(filename, O_WRONLY | O_APPEND);
	if (fhandle < 0)
		return (-1);

	if (text_content == NULL)
		wpt = write(fhandle, text_content, nbytes);
	else
	{
		while (text_content[nbytes])
			nbytes++;

		wpt = write(fhandle, text_content, nbytes);
		if (wpt != nbytes)
			return (-1);
	}

	close(fhandle);

	return (1);
}
