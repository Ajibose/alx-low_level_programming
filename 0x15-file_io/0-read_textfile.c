#include "main.h"

/**
 * read_textfile - read a file to a buffer and writes it to standard output
 * @filename: file to be read
 * @letters: Number of bytes to read
 *
 * Return: 0 or number of byte to raed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nbyte;
	int uniq;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	uniq = open(filename, O_WRONLY);
	if (uniq == -1)
	{
		free(buffer);
		close(uniq);
		return (0);
	}

	nbyte = read(uniq, buffer, sizeof(char) * letters);
	if (nbyte == -1)
	{
		free(buffer);
		close(uniq);
		return (0);
	}

	nbyte = write(STDOUT_FILENO, buffer, nbyte);
	if (nbyte == -1)
	{
		free(buffer);
		close(uniq);
		return (0);
	}

	free(buffer);
	close(uniq);
	return (nbyte);
}
