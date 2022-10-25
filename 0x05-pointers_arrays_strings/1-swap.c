#include "main.h"

/**
 * swap_int - Integer swapping *a and b*
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
