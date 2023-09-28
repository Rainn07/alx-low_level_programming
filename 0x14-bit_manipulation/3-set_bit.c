/*
 * Auth: Jaxn
 * Project: 0x14. C - Bit manipulation
 * Task: 3 set bit to 1 at given index
 */
#include <stdio.h>
#include "main.h"
/**
 * set_bit - set bit to 1 at given index
 * @n: bit
 * @index: index of bit to be set to 1
 *
 * Return: -1 - error
 *      1 - Success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int index_binary;

        /*check if index is out if range*/
        if (index >= sizeof(unsigned long int) * 8)
                return (-1);

        index_binary = 1 << index;

	*n = *n | index_binary;

        return (1);
}
