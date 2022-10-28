#include "main.h"

/**
 **infinite_add - Adds two numbers together
 *@n1: Parameter 1
 *@n2: Parameter 2
 *@r: Buffer storage
 *@size_r: Buffer siz
 *Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;

	for (i = 0; n1[i] != '\0' || n2[i] != '\0' || r[i] != '\0'; i++)
	{
		if (size_r <= i)
		{
			r[i] = n1[i] + n2[i];
		}
	}
	return (r);
}
