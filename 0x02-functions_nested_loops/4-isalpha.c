#include "main.h"

/**
 *_isalpha - Checks for lower and upper characters
 *@c: Integer tested
 *Return: 1 if lower character, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
