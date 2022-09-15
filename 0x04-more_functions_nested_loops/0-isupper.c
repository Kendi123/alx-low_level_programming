#include "main.h"
/**
 * _isupper - checks for uppercase letter
 * @c: is the input parameter
 * Return: 1 if uppercase 0 if not uppercase
 */
int _isupper(int c)
{
	int let;

	for (let >= 'A'; let <= 'Z'; let++)
	{
		if (let == c)
		{
			return (1);
		}
	}
	return (0);
}
