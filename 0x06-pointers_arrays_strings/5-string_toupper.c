#include "main.h"

/**
 * *string_toupper - Convert to upper case
 * @s: Prarameter
 * Return: char
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' &&  s[i] <=  'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
