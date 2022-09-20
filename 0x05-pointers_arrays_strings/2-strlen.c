#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * return: length of the string as an integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
