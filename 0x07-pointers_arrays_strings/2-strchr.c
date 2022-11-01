#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: Source string
 * @c: Charcter to be located
 * Return: char
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
		s++;
		}
		else
		{
		s = "NULL";
		}

	}
	return (s);
}
