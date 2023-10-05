/*
 * File: 1-create_file.c
 * Auth: Jaxn
 */
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * create_file - creae file and writes in it
 * @filename: ptr to file
 * @text_content: NULL terminated str to be written in file
 *
 * Return: 1 - Success
 *	-1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		/*counting num of char in text*/
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (o == -1)
		return (-1);

	w = write(o, text_content, len);
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
	{
		close(o);
		return (-1);
	}
	close(o);
	return (1);
}
