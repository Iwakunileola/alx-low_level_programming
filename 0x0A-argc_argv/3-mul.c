#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Program that multiplies two numbers
 * @argc: count parametrs in argv
 * @argv: pointers to string
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int first = atoi(argv[1]);
	int last = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", last * first);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
