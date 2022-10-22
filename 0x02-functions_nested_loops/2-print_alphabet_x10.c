#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
