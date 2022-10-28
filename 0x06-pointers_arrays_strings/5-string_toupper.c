#include "main.h"

/**
 * *string_toupper - Convert to upper case
 * @s: Prarameter
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' &&  s[i] >=  'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
