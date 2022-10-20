#include "main.h"

/**
 * _isdigit - checks for digit (1 through 9)
 * @c: integer tested
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	char y = '9';
	char x = '0';

	if (c >= x && c <= y)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
