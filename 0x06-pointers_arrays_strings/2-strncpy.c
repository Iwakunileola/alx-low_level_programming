#include "main.h"

/**
 **_strncpy - Copies strings fron src to dest
 *@dest: Destination parameter
 *@src: Source paramater
 *@n: Number of strings to be copied
 *Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0';)
	{
		*(dest + i) = *(src + i);
		i++
	}
	for (; i < n ;)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
