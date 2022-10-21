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

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= p; y++)
		{
			if (n == 0 || n < 0)
			{
				_putchar('\n');
			}
			else if (p <= n && y == p)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		n++;
	}
}
