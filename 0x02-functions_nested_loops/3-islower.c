#include "main.h"
/**
 * _islower checks for lowercase letters
 * @c is the input parameter
 * Return: 0 (Success)
 */
int _islower(int c)
{
	int c = 'a';
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
