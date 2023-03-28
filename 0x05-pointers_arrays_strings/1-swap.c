#include "main.h"
/**
 * swap_int - funct that swaps the values of two integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp_num = *a; /*temporary storage var*/

	*a = *b;
	*b = temp_num;
}
