#include "main.h"
/**
 * _isdigital - checks if input is digital
 *
 * @c: input to be checked
 *
 * Return: 1 if number
 */
int _isdigital(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
