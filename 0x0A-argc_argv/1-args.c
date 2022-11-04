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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
