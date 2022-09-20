#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: pointer variable
 * returns: the value 98
 */
void reset_to_98(int *n)
{
	int val = 98;

	n = &val;
}
