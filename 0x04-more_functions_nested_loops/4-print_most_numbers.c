#include "main.h"

/**
 * print_most_numbers - print 0 to 9, skipping 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		if (y == 2 || y == 4)
		{
			continue;
		}
		else
		{
			_putchar(y);
		}
	}
	_putchar('\n');
}
