#include "main.h"

/**
 * append_text_to_file - append string to alredy creatde file
 * @filename: file to append to
 * @text_content: string to append
 *
 * Return: -1 on failure or 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int uniq, nbyte, len;

	if (filename == NULL)
		return (-1);

	uniq = open(filename, O_WRONLY | O_APPEND);
	if (uniq == -1)
	{
		close(uniq);
		return (-1);
	}

	if (text_content)
	{
		len = _len(text_content);
		nbyte = write(uniq, text_content, len);
		{
			close(uniq);
			return (-1);
		}
	}
	close(uniq);
	return (1);
}

/**
 * _len - count the number of byte in a string
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
