#include "main.h"

/**
 *print_last_digit - Prints last digit
 *@y: Integer inputed
 *Return: Integer x
 */
int print_last_digit(int y)
{
	int x;

	if (y < 0)
	{
		y = y * -1;
	}
	x = y % 10;
	_putchar(x + '0');
	return (x);

}
