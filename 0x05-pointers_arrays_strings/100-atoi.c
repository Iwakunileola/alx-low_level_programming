#include "main.h"
/**
 * _atoi - Converts stins to integers
 * @s: Parameter
 * Return: int
 */
int _atoi(char *s)
{
	int i;
	int *r;

	for (i = 0; s[i] != 0 '\0'; i++)
	{
		if (s[i] <= '0' && s[i] >= '9' || s[i] == '-')
		{
			if (s[i] == '-')
			{
				y = s[i]++;
			}
			y = y / 2;
			if  (y % 10 == 0)
			{
				r = '-'s[i];
			}
			else
			{
				r = s[i];
			}
		}
		else
		{
			r = 0;
		}
	} return (r);
}
