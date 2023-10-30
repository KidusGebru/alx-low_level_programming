#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _close_file - Closes a file
 * @fd: File descriptor of open file
 *
 * Return: Void
 */
void _close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * _ext - Exits program with possible error message
 * @errcode: Error code
 * @payload: Error message input
 *
 * Return: Void
 */
void _ext(int errcode, char *payload)
{
	switch (errcode)
	{
		case 97:
			dprintf(2, "Usage: %s file_from file_to\n", payload);
			exit(97);
			break;
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", payload);
			exit(98);
			break;
		case 99:
			dprintf(2, "Error: Can't write to %s\n", payload);
			exit(99);
			break;
	}
}

/**
 * main - Copies contents files to another file
 * @argc: Aarguments count
 * @argv: Array of pointers to argument strings
 *
 * Return: 97, 98, 99 or 100 on failure, 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd_cnt, wr_cnt;
	char *buf[1024];

	if (argc != 3)
		_ext(97, argv[0]);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		_ext(98, argv[1]);
	fd_to = open(argv[2], 64 | 1 | 512, 256 | 128 | 32 | 16 | 4);
	if (fd_to == -1)
		_ext(99, argv[2]);
	rd_cnt = read(fd_from, buf, 1024);
	if (rd_cnt == -1)
		_ext(98, argv[1]);
	while (rd_cnt > 0)
	{
		wr_cnt = write(fd_to, buf, rd_cnt);
		if (wr_cnt == -1 || wr_cnt != rd_cnt)
			_ext(99, argv[2]);
		rd_cnt = read(fd_from, buf, 1024);
		if (rd_cnt == -1)
			_ext(98, argv[1]);
	}
	_close_file(fd_from);
	_close_file(fd_to);
	return (0);
}
