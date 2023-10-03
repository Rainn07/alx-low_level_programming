/*
 * File: 0-read_textfile.c
 * Auth: Jaxn
 */
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * read_textfile - read txt & print to POSIX stdout
 * @filename: ptr to file
 * @letters: number of char to be read and printed
 *
 * Return: 0 - failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t r, o, w;

	if (filename == NULL)
		return (0);

	buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		perror("malloc");
		return (0);
	}

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		perror("open");
		free(buffer);
		return (0);
	}

	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (r == -1 || w == -1 || w != r)
	{
		perror("read or write");
		free(buffer);
		close(o);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
