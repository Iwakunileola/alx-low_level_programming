#include "main.h"

/*
*_strcmp - Copies strings
*@s1: Parameter
*@s2: Parameter
*Return: Integer
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
