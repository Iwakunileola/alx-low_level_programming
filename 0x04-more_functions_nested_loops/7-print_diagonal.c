#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of lines
 * Return: void
 */
void print_diagonal(int n)
{
	int y;
	int x;
	int p = 1;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= p; y++)
		{
			if (p <= n && y == p)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		p++;
	}
}
