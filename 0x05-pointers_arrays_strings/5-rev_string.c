#include "main.h"

/**
 *rev_string - changes strings to out put in reverse
 *@s: Char pointer paramete/array
 *Return: void
 */
void rev_string(char *s)
{
	int i;
	int r;
	int n;
	char ch;

	for (i = 0; (s[i] != '\0'); i++)
	n = i;
	for (r  = 0; r < (i / 2); n--, r++)
	{
		ch = s[r];
		s[r] = s[n];
		s[n] = ch;
	}
}

