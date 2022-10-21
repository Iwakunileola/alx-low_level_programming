#include "main.h"

/**
 * more_numbers - prints 10 time from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int y;
	int x;
	int z = 1;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10 && x <= 14)
			{
				_putchar(z % 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}

