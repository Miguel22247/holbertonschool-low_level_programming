#define _GNU_SOURCE
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * close_errchk - closes a file descriptor and prints
 * an error message if it fails
 *
 * @fd: file descriptor to close
 *
 * Return: 0 on success, -1 on failure
 */
int close_errchk(int fd)
{
	int err;

	err = close(fd);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}

/**
 * write_err - error handler for a write error
 *
 * @fd1: first descriptor to close
 * @fd2: second descriptor to close
 * @filename: filename prompting the error
 *
 * Return: 99
 */
int write_err(int fd1, int fd2, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	close_errchk(fd1);
	close_errchk(fd2);
	return (99);
}

/**
 * read_err - error handler for a read error
 *
 * @fd1: first descriptor to close
 * @fd2: second descriptor to close
 * @filename: filename prompting the error
 *
 * Return: 98
 */
int read_err(int fd1, int fd2, char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	close_errchk(fd1);
	close_errchk(fd2);
	return (98);
}

/**
 * main - copy one file to another, new file with perms 664
 * usage - cp file_from file_to
 *
 * @ac: number of arg
 * @av: list of args
 *
 * Return: 97 if incorrect num of args
 * 98 if file_from does not exist or unreadable
 * 99 if write fails
 * 100 if file close fails
 * 0 otherwise
 */
int main(int ac, char *av[])
{
	char buf[1024];
	int lenr, lenw, file_from, file_to, err;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			av[1]);
		return (98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close_errchk(file_from);
		return (99);
	}
	do {
		lenr = read(file_from, buf, 1024);
		if (lenr == -1)
			return (read_err(file_from, file_to, av[1]));
		lenw = write(file_to, buf, lenr);
		if (lenw == -1 || lenw != lenr)
			return (write_err(file_from, file_to, av[2]));
	} while (lenr == 1024);
	err = close_errchk(file_from);
	err += close_errchk(file_to);
	if (err != 0)
		return (100);
	return (0);
}
