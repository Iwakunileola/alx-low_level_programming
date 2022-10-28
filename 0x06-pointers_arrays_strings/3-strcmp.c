#include "main.h"

/**
 * *_strcmp - Compares strings
 * @s1: Destination parameter
 * @s2: Source parameter
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i] != '\0' || s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	return (s1[i] - s2[i]);
}
