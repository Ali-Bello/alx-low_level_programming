#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int nb;
	int nb_2;

	nb = 0;
	while (nb < 9)
	{
		nb_2 = nb + 1;
		while (nb_2 < 10)
		{
			putchar(nb + '0');
			putchar(nb_2 + '0');
		if (nb != 8)
		{
			putchar(',');
			putchar(' ');
		}
			nb_2++;
		}
		nb++;
	}
	putchar('\n');
	return (0);
}
