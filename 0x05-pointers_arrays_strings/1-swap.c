#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * swap a: integer to swap
 * swap b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
