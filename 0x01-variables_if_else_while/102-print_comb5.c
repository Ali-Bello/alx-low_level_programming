#include <stdio.h>
/**
   * main - prints all possible combinations of two two-digit numbers
    * Return: Always 0 (Success)
     */
int main(void)
{
	int nb, nb2;
		nb = 0;
		while (nb <= 98)
		{	
			nb2 = nb + 1;
			while (nb2 <= 99)
			{
				putchar((nb / 10) + '0');
				putchar((nb % 10) + '0');
					putchar(' ');
				putchar((nb2 / 10) + '0');
				putchar((nb2 % 10) + '0');
					if (nb != 98)
					{
						putchar(',');
						putchar(' ');
					}
				nb2++;
			}
		nb++;
		}
			putchar('\n');
	return (0);
}
