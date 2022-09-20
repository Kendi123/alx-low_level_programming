#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: value of first integer
 * @b: value of second integer
 * return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	
	*a = *b;
	*b = temp;
}
