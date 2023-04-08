#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: const char type parameter, name of the file
 * @letters: size_t type parameter
 *
 * Description: This function reads a text file and prints it to the
 * POSIX standard output
 * Return: 0 on all failures
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int rf, wf, fhandle;

	fhandle = open(filename, O_RDONLY);
	if (fhandle < 0)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	rf = read(fhandle, buffer, letters);
	if (rf < 0)
		return (0);
	buffer[rf] = '\0';
	close(fhandle);

	wf = write(STDOUT_FILENO, buffer, rf);
	free(buffer);
	if (wf < 0)
		return (0);

	return (wf);
}

