#include "main.h"

/**
 *print_sqaure - prints square
 *@size: integer used to ptint
 *Return: void
 */
void print_square(int size)
{
	int y;
	int x;

	for (y = 1; y <= size; y++)
	{
		for (x = 1; x <= size; x++)
		{
			if (size == 0 || size < 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
