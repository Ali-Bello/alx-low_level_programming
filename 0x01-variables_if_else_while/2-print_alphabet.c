#include <stdio.h>

/**
   * main - Prints the alphabet.
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
		i = 0;
		while (alpha[i])
		{
			putchar(alpha[i]);
			i++;
		}
			putchar('\n');
	return (0);
}
