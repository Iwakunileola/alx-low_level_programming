#include "main.h"

/**
 **rot13 - Encodes strings
 *@*a: parameter
 *Return: char
 */

char *rot13(char *a)
{
	char *l, *f;
	int i, y;

	l = "abcdefghijklmnopqrstuvwxyz";
	f = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (y = 0; l[y] != '\0' || f[y] != '\0'; y++)
		{
			if (a[i] == l[y])
			{
				a[i] = f[y];
			}
		}
	}
	return (a);
}
