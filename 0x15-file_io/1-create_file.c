#include "main.h"

/**
 * create_file - create a file
 * @filename: const char, name of the file to be created
 * @text_content: char, NULL terminated string to write to the file
 *
 * Description: This function creates a file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int nbytes = 0;
	int fhandle, wpt;

	if (filename == NULL)
		return (-1);

	fhandle = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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

