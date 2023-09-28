/*
 * Auth: Jaxn
 * Project: 0x14. C - Bit manipulation
 * Task: 2 return value of bit at given index
 */
#include <stdio.h>
/**
 * get_bit - return value of bit at given index
 * @n: bit
 * @index: index of bit to be returned
 *
 * Return: -1 - error
 *	value of bit - Success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int index_binary;

	/*check if index is out if range*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	index_binary = 1 << index;

	return ((n & index_binary) ? 1 : 0);
}
