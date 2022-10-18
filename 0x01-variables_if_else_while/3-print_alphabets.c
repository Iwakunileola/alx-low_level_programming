#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch, cp;

	for (ch = 'a', cp = 'A'; ch <= 'z'; ch++);

	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
