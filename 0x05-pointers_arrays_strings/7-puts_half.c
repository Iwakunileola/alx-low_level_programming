#include "main.h"

/**
 *puts_half - Prints half character
 *@str: Char pointer paramete/array
 *Return: void
 */
void puts_half(char *str)
{int i, n, t;

	for (i = 0; (str[i] != '\0'); i++)
	{
		n = i / 2;
	}
	for (t = n + 1; t < i; t++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[t]);
		}
		else
		{
			_putchar(str[t + 1]);
		}
	}
	_putchar ('\n');
}
