/*
 * Auth: Jaxn
 * Project: 0x14. C - Bit manipulation
 * Task: 2 return value of bit at given index
 */
#include <stdio.h>
/**
 * get_bit - return value of bit at given index
 * @n: bit
 *
 * Return: -1 - error
 *	value of bit - Success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*check if index is out if range*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & (1 << index)) == 1)
		return (1);
	else
		return (0);
}
