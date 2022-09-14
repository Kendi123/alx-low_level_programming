#include "main.h"
/**
 * _islower - checks for a lowercase letter
 * @c: is the input parameter
 * Return: 1 if lowercase 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
