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

	for (i = 0; dest[i] != '\0'; i++)
	
	for (p = 0; p < n && src[p] != '\0'; p++)
	{
		dest[i + p] = src[p];
	}
	dest[i + p] = '\0';
	return (dest);
}
