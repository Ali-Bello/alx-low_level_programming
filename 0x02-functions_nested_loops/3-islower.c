#include "main.h"
/**
  *_islower - Checks if the input is lowercase
  *@c:  the character to be checked
  *Return: 1 if it's lowercase, otherwise return 0.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
