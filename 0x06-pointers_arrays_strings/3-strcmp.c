#include "main.h"

/*
*_strcmp - Copies strings
*@s1: Destination string
*@s2: Copied string
*Return: Integer
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int y;

	for (i = 0; s2[i] != '\0' || s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			y = s1[i] - s2[i];
	}

	return (y);
}
