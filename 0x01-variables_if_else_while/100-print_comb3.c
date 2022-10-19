#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch, y;

	ch = 'd';
	y = 'd';

	while (y <= 'm')

	{
		if (ch <= 'm' && ch == y)
		{
			continue;
		putchar(y % 10 + '0');
		putchar(ch % 10 + '0');
		putchar(',');
		putchar(' ');
		}


	}

		putchar('\n');

	return (0);
}
