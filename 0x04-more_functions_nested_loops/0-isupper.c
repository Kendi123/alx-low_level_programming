#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: is the input parameter
 * Return: 1 if lowercase 0 if not lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
