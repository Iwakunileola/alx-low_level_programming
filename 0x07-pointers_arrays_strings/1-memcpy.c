#include "main.h"

/**
 * *_memcpy - Copies first n bytes from src
 * @dest: Detination string
 * @src: Source string
 * @n: Numbers of bytes copied
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
