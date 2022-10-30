#include <stdio.h>

/**
*print_array - Prints to nth element of an array
*@a: Array parameter
*@n: Integer parameter
*Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i == (n - 1))
			break;
		printf(",");
		printf(" ");
	}
	printf("\n");
}
