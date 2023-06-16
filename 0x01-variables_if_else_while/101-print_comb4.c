#include <stdio.h>
/**
   * main - prints all possible different combinations of two digits
    * Return: ALways 0 (Success)
     */
int main(void)
{
	int d1;
	int d2;
	int d3;
		d1 = 0;
		while (d1 <= 7)
		{
			d2 = d1 + 1;
				while (d2 <= 8)
				{
					d3 = d2 + 1;
					while (d3 <= 9)
					{
						putchar(d1 + '0');
							putchar(d2 + '0');
								putchar(d3 + '0');
					if (d1 != 7)
					{
						putchar(',');
						putchar(' ');
					}
						d3++;
					}
				d2++;
				}
		d1++;
		}
			putchar('\n');
	return (0);
}
