#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - allocates space in memory to str
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	for (j = 0; str[j] != '\0'; j++)

	ptr = malloc(j * (sizeof(char)));
	for (i = 0; i < j; i++)
	{
		if (str == NULL)
		{
			return (NULL);
		}
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
