#include "main.h"

/**
 **_strncat - Concatenates two strings till n
 *@dest: Recieved parameter destination
 *@src: Recieved source file
 *@n: End of contatenation
 *Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int p;
	int y;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i = i;
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		y = y;
	}
	i = i;
	y = y;
	if (n <= y)
	{
		for (p = 0; p < n; p++)
		{
			dest[i + p] = src[p];
		}
	}
	dest[i + n] = '\n';
	return (dest);
}
