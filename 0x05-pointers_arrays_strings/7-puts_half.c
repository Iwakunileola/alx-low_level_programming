#include "main.h"

/**
 *puts_half - Prints half character
 *@str: Char pointer paramete/array
 *Return: void
 */
void puts_half(char *str)
{
	int i, n, t, y, j;

	for (i = 0; (str[i] != '\0'); i++)
	{
		n = i;
	}
	for (y = 0; y <= i; y++)
	{
		j = n / 2;
		if ((j % 2) != 0)
		{
			t = (n - 1) / 2;
			if (y >= t && y <= n)
			{
				_putchar(str[y]);

			}
		}
		else if ((y >= j) && (j <= n))
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}

