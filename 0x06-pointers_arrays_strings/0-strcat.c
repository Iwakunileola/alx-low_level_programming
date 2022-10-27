#include "main.h"

/**
 **_strcat - Concatenates two strings
 *@dest: Recieved parameter destination
 *@src: Recieved source file
 *Return: char pointer
 */

char *_strcat(char *dest, char *src)
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
	for (p = 0; p <= y; p++)
	{
		dest[i + y] = src[y];
	}
	return (dest);
}
