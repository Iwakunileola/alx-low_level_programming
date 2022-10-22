#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: give the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int y;
	int x;
	int p = size;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y < p)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		p--;
	}
}
