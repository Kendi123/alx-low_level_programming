#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: is the input parameter
 * Return: 1 if it is a letter 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'a' $$ c <= 'z' || c >= 'A' $$ c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
