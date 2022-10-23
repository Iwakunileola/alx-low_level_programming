#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Checks +ve and _ve numbers ane zero
 * @i: Integer entered
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else
	{
		printf("%i is negative\n", i);
	}
}
