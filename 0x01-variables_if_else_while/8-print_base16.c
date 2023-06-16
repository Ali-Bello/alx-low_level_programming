#include <stdio.h>
/**
   * main - Prints numbers between 0 to 9 and letters between a to f.
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	int i;
		i = '0';
			while (i < 58)
			{
				putchar(i);
				i++;
			}
		i = 'a';
			while (i < 'g')
			{
				putchar(i);
				i++;
			}
					putchar('\n');
	return (0);
}
