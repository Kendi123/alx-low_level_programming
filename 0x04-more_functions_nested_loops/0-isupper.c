#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: parameter
 * Return: 1 if uppercase 0 is not
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
}
