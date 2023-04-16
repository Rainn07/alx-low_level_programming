#include "main.h"
#include <unistd.h>

/** 
 * _putchar - prints the character c to stdout
 * @c: Character to be print
 * 
 * Return: On success 1.
 */
 int _putchar(char c)
{
	return(write(1, &c, 1));
}
