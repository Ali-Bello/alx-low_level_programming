#include "main.h"
/**
  *_isalpha - Checks if the given parameter is alphabetical
  *@c: the parameter to be checked
  *Return: 1 if it's alphabetical ,otherwise return 0;
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
