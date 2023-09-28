/*
 * Auth: Jaxn
 * Project: 0x14. C - Bit manipulation
 * Task: 0 Binary to int conversion
 */
#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned
 *		int
 * @b: ptr to str containing the binary
 *
 * Return: 0 - if char is found in b
 *		if b is NULL
 *	converted number - Success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	/*first argment check*/
	if (b == NULL)
		return (0);
	/*search b for char != (0 | 1)*/
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
