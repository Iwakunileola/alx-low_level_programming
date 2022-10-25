#include "main.h"

/**
 *print_rev - Prints strings to out put in reverse
 *@s: Char pointer paramete/array
 *Return: void
 */
void print_rev(char *s)
{
	int i;
	int n;
	int p;

	for (i = 0; (s[i] != '\0'); i++)
	{
		n = i;
	}
	for (p = n; p != 0; p--)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar(s[0]);

	_putchar('\n');
}

