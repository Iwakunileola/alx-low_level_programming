#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - allocates space in memory to str
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	int i, j, len;
	char *ptr, *st;

	st = "";

	len = 0;
	for (j = 0; str[j]; j++)
	{
		len++;
	}


	if (str == NULL || str == st)
	{
		return (NULL);
	}
	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}

	ptr[len] = '\0';
	return (ptr);
}
