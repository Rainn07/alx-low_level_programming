/*
 * Auth: Jaxn
 * Project: 0x14. C - Bit manipulation
 * Task: 5 counts number of bits to flip
 */
#include <stdio.h>
#include "main.h"
/**
 * flip_bits - counts number of bits to
 *		flip to make two number identical
 * @n: first bit
 * @m: second bit
 *
 * Return: -1 - error
 *      number of bits to flip - Success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count;
	unsigned long int xor_result;

	xor_result = n ^ m;
	xor_result = 0;

	while (xor_result > 0)
	{
		flip_count += xor_result & 1;
		xor_result >>= 1;
	}
	return (1);
}
