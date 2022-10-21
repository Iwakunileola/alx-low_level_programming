#include "main.h"

/**
 * more_numbers - prints 10 times from 0 -14
 * Return: void
 */
void more_numbers(void)
{
	int x = 0;
	int y;

	while (x <= 10)
	{
		for (y = 0; y <= 14; y++)
		{
		_putchar (y + '0');
		}
		_putchar('\n');
		x++;
	}
}

