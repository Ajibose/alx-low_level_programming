#include "main.h"

/**
 * create_file - Creates a file with rw permision & write to it
 * @filename: file to create
 * @text_content: string to write from
 *
 * Return: -1 on failure or 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int uniq, nbyte, len;

	if (filename == NULL)
		return (-1);

	uniq = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (uniq == -1)
	{
		close(uniq);
		return (-1);
	}

	if (text_content != NULL)
	{
		len = _len(text_content);
		nbyte = write(uniq, text_content, len);
		if (nbyte == -1)
		{
			close(uniq);
			return (-1);
		}
	}
	close(uniq);
	return (1);
}

/**
 * _len - count the number of bytes in a string
 * @s: string to count
 *
 * Return: length of string
 */
int _len(char *s)
{
	int i;
	for (i = 0; *(s + i) != '\0'; i++)
		;
	return (i);
}
