#include "main.h"

/**
 * _puts - Prints strins with new line
 * @s: string to print
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

