#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer tested
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	int y = 'A';
	int x = 'Z';

	if (c >= y && c <= x)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
