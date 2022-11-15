#include "main.h"
#include <stdlib.h>

/**
 ***alloc_grid - Allocates memory space to 2-D array
 *@width: first parameter
 *@height: second parameter
 *Return: double pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = (int **) malloc(height * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr);
			for (j = 0; j < i; j++)
				free(ptr[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
