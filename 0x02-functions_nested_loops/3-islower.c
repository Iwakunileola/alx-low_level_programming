#include "main.h"

/**
 *_islower - Checks for lower characters
 *@c: Integer tested
 *Return: 1 if lower character, and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
