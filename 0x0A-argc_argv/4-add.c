#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Program that adds numbers
 * @argc: count parametrs in argv
 * @argv: pointers to string
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
}
