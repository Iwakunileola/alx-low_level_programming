#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Source string
 * @accept: String length to be gotten
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}
	return (n);
}
