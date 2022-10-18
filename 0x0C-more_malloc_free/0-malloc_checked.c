#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: parameter
 * Return: a pointer to the allocated memory if successful, if not,
 * a normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
