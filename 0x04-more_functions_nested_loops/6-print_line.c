#include "main.h"

/**
 *print_line - prints straight lines
 * @n: numer of lines
 * Return: void
 */

void print_line(int n)
{
	int y;

	for (y = 1; y <= n; y++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
