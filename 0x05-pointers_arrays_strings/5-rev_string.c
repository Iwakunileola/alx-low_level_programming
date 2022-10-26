#include "main.h"

/**
 *rev_string - changes strings to out put in reverse
 *@s: Char pointer paramete/array
 *Return: void
 */
void rev_string(char *s)
{
	int i;
	int n;
	int p;
	int r;

	for (i = 0; (s[i] != '\0'); i++)
	{
		n = i;
	}
	for (p = n, r = 0; p >= 0 && r <= n; p--, r++)
	{
		*(s + r) = *(s + p);
	}
}

