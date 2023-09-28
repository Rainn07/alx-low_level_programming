/*
 * Auth: Jaxn
 * Project: 0x14. C - Bit manipulation
 * Task: 0 Binary to int conversion
 */
#include <stdio.h>
#include "main.h"
/**
 * print_binary - Print binary format of number
 * @n: number to be printed in binary
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
