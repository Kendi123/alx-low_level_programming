#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: parameter
 * returns: length of the string
 */
int _strlen(char *s)
{
	int len;

	while(*(s + len) != '\0')
		len++;
	return (len);
}
