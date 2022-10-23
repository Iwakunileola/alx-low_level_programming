#include "main.h"

/**
 * print_square - Prints square
 * @size: Prints numbers of #
 * Return: void
 */
void print_square(int size)
{
	int y;
	int x;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	for (y = 1; y <= size; y++)
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
