#include <stdio.h>
#include "main.h"

/**
 *swap_int - This help swap the two integrers
 *@a: integer for a to be swapped
 *@b: integer for b to be swapped
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
