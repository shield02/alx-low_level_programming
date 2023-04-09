#include "main.h"

/**
 * arg_error - handle number of arguments error
 *
 * Description: This function handles error when the number
 * of arguments is not correct
 * Return: 0
 */
void arg_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * read_error - hanlde read error
 * @file: File to be read
 *
 * Description: This function handles error when
 * a file cannot be read
 * Return: 0
 */
void read_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * write_error - handle write error
 * @file: File to write to
 * @handle: A file handle
 *
 * Description: This function handles error when
 * content cannot be written to a file
 * Return: 0
 */
void write_error(char *file, int handle)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	close(handle);
	exit(99);
}

/**
 * close_error - hanlde close error
 * @handle: A file handle
 *
 * Description: This function handles error in closing a file
 * Return: 0
 */
void close_error(int handle)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", handle);
	exit(100);
}

/**
 * main - copy from a file to another file
 * @arg: int, number of command line arguments
 * @arr: char, array of command line arguments
 *
 * Description: This function copies the content of one file to another file
 * Return: 0
 */

int main(int arg, char *arr[])
{
	int from_handle, to_handle, wpt;
	char buffer[1024];

	if (arg != 3)
		arg_error();

	from_handle = open(arr[1], O_RDONLY);
	if (arr[1] == NULL || from_handle < 0)
		read_error(arr[1]);

	to_handle = open(arr[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_handle < 0)
		write_error(arr[2], from_handle);

	while ((wpt = read(from_handle, buffer, 1024)) > 0)
	{
		if (wpt != write(to_handle, buffer, wpt))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arr[2]);
			close(from_handle);
			close(to_handle);
			exit(99);
		}
	}
	if (wpt < 0)
		read_error(arr[1]);

	if (close(from_handle) < 0)
		close_error(from_handle);
	if (close(to_handle) < 0)
		close_error(to_handle);
	return (0);
}

