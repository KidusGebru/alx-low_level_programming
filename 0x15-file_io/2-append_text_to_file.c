#include "main.h"

/**
 * _strlen - Returns string length
 * @str: The string
 *
 * Return: Number of chars
 */
int _strlen(const char *str)
{
	if (str[0] != '\0')
		return (1 + _strlen(++str));
	return (0);
}

/**
 * append_text_to_file - Appends text at end of file
 * @filename: Pointer to string filename
 * @text_content: Pointer to string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (fd);

	if (text_content != NULL)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);
	return (1);
}
