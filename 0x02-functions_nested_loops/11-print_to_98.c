#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 * @n: Beginnig of print
 *Return: void
 */
void print_to_98(int n)
{
	int y;
	int x;

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%i\n", x);
				break;
			}
			else
			{
				printf("%i, ", x);
			}
		}
	}
	else
	{
		for (y = n; y <= 98; y++)
		{
			if (y == 98)
			{
				printf("%i\n", y);
				break;
			}
			else
			{
				printf("%i, ", y);
			}
		}
	}
}
