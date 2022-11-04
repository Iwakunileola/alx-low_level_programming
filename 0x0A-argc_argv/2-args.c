#include <stdio.h>

/**
 * main - Entry
 * Program that prints all arguments it receives
 * @argc: count parametrs in argv
 * @argv: pointers to string
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
