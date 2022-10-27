#include "main.h"

/**
 *reverse_array - reverses strings
 *@a: parameter
 *@n: number of elements of array to be reversed
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int y;
	int p;

	for (i = 0, p = (n - 1); i < p; p--, i++)
	{
		y = a[i];
		a[i] = a[p];
		a[p] = y;
	}
}
