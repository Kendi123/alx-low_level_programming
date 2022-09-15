#include "main.h"
/**
 * _isupper - checks for uppercase letter
 * @c: is the input parameter
 * Return: 1 if uppercase 0 if not uppercase
 */
int _isupper(int c)
{
	int i;

	for (i > 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
