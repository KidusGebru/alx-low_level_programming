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
 * create_file - Creates a file
 * @filename: Name of new file
 * @text_content: String to write to new file
 *
 * Return: 1 on sucess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
