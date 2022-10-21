#include <stdio.h>

/**
 * more_numbers - prints 10 times from 0 -14
 * Return: void
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			putchar(y + '0');
		}
		putchar('\n');
	}
}

