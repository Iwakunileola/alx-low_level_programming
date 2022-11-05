#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: numbers of arguments
 * @argv: parameters entered
 * Return: 0 on sucess and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int p[] = {25, 10, 5, 2, 1};
	int i, l, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	l = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		while (l - p[i] > 0 || l - p[i] == 0)
		{
			j++;
			l = l - p[i];
		}
	}
	printf("%d\n", j);
	return (0);
}
