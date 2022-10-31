#include "main.h"

/**
 * *_memset - Copies first n bytes
 * @s: Detination string
 * @b: Constant byte copied
 * @n: Numbers of bytes copied
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
