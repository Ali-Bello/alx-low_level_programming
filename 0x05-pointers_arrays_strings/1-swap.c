#include "main.h"
/**
  *swap_int - function to swap the values of two integers
  *@a: the first integer
  *@b: the second integer
  */
void swap_int(int *a, int *b)
{
	int tmp;
		tmp = *a;
		*a = *b;
		*b = tmp;
}
