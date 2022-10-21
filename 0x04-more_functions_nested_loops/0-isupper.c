#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer tested
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	int 'A';
	int 'Z';

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
