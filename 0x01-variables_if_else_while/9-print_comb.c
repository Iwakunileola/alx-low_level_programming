#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'd'; ch <= 'm'; ch++)

	{
		putchar(ch % 10 + '0');
		putchar(',');
		putchar(' ');
	}

		putchar('\n');

	return (0);
}
