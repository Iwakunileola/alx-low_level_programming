#include "main.h"

/**
 * void swap_int - Swaps integer *a and b*
 * @a: Integer pointer parameter
 * @b: Integer pointer parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
