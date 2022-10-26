#include "main.h"

/**
 **_strcpy - Copies strings from *src to *dest
 *@dest: Destination string
 *@src: Source string
 *Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; (src[i] >= '\0'); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

