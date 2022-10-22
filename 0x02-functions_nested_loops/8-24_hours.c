#include "main.h"

/**
 * jack_bauer -  prints time in minutes
 * Return: void
 */
void jack_bauer(void)
{
	int x;
	int y;
	int p;
	int q;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 3; y++)
		{
			for (p = 0; p <= 5; p++)
			{
				for (q = 0; q <= 9; q++)
				{
					_putchar(x % 10 + '0');
					_putchar(y % 10 + '0');
					_putchar(':');
					_putchar(p % 10 + '0');
					_putchar(q % 10 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
