#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int i, j;
		i = n;
	if (n <= 98)
	{
	while (i <= 98)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
		i++;
	}
		printf("\n");
	}
	else if (n > 98)
	{
	while (i >= 98)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
		i--;
	}
		printf("\n");
	}
}
