/*
 * File: 2-append_text_to_file.c
 * Auth: Jaxn
 */
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * append_text_to_file - appends text to file
 * @filename: ptr to file
 * @text_content: NULL terminated str to be add to end of file
 *
 * Return: 1 - Success
 *	-1 - Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;
	/*open object, write object, len var*/

	/*filename exists?*/
	if (filename == NULL)
		return (-1);

	/*empty text, do nothing; else find text length*/
	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len]; len++)
		;

	/*open and write to file*/
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
	{
		perror("open");
		return (-1);
	}

	w = write(o, text_content, len);
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);
	return (1);
}
