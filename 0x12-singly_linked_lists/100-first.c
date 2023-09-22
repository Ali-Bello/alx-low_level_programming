#include "lists.h"
#include <stdio.h>

void	beforeMain(void)__attribute__((constructor));

/**
  * beforeMain - executed before the main function.
  */

void	beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
