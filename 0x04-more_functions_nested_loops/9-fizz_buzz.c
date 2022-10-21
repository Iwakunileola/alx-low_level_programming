#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if (y % 5 == 0 && y % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (y % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (y % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", y);
		}
	}
	return (0);
}
