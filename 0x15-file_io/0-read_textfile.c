#include "main.h"

/**
 * read_textfile - Reads a file and prints to the statndard output
 * @filename: Pointer to string of filename
 * @letters: Number of character to read from file
 *
 * Return: Number of letters read and printed OR 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, rd_cnt, wr_cnt;

	if (filename == NULL)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd_cnt = read(fd, buf, letters);
	if (rd_cnt == -1)
		return (0);

	wr_cnt = write(2, buf, rd_cnt);
	free(buf);
	if (wr_cnt == -1)
		return (0);
	else if (wr_cnt != rd_cnt)
		return (0);

	if (close(fd) == -1)
		return (0);
	return (wr_cnt);
}
