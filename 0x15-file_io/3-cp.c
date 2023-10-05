/*
 * File: 3-cp.c
 * Auth: Jaxn
 */
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * fd_close - Closes file descriptors. and error checks
 * @fd: The file descriptor to be closed.
 */
void fd_close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of one file to another file
 * @argc: number of arguments
 * @argv: vector of ptr to arguments
 *
 * Return: 0 - Success
 *
 * Desc:	97 - number of arguments
 *		98 - file_from cannot be read/ Does not exist
 *		99 - file_to cannot be written / created
 *		100 - either files cannot be closed
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
			exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = (char *)malloc(1024);
	if (buffer == NULL)
	{
		perror("malloc");
		exit(100);
	}

	do {
		r = read(fd_from, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			fd_close(fd_from);
			fd_close(fd_to);
			exit(98);
		}

		w = write(fd_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			fd_close(fd_from);
			fd_close(fd_to);
			exit(99);
		}
	} while (r > 0);

	free(buffer);
	fd_close(fd_from);
	fd_close(fd_to);

	return (0);
}
