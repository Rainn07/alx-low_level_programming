/*
 * Auth: Jaxn
 * Project: 0x14. C - Bit manipulation
 * Task: 4 Set bit to 0 at given index
 */
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets bit at given index to 0
 * @n: bit to be manipulated
 * @index: index of interest
 *
 * Return: 1 - Succes
 *	-1 - Failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int index_binary;

	/*check if index is out if range*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	index_binary = 1 << index;

	*n = *n & (~index_binary);
	return (1);
}
