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
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}


	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
