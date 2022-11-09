#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars, and initializes it with a specific char
 * @size: array size
 * @c: character to be print
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc((size + 1) * (sizeof(char)));
	for (i = 0; i < size; i++)
	{
		if (size == 0)
		{
			return (NULL);
		}
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[i] = c;
	}
	ptr[i] = '\0';
	return (ptr);
}
