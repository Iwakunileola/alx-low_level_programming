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
	int i, j, l, sum = 0;

		if (argc == 1)
		{
			printf("0\n");
			l = 0;
		}

		for (i = 0; i < argc; i++)
		{
			for (j = 0; **(argv + j) != '\0'; j++)
			{
				if ((!**(argv + j)) >= 48 && (!**(argv + j)) <= 57)
				{
					printf("Error\n");
					l = 1;
					break;
				}
				else
				{
					printf("%d\n", sum = sum + atoi(argv[i]));
					l = 1;
				}
			}
		}
	return (l);
}
