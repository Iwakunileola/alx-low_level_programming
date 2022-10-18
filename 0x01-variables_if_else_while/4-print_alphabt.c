#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'n' && ch != 'e' && ch != 'q'; ch++)

	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
