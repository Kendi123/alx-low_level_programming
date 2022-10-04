#include <stdio.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @c: specific character to initialize
 * @size: size of array
 * Return: NULL if size = 0,  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(c));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
