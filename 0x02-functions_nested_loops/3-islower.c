#include "main.h"
/**
 * _islower checks for lowercase letters
 * Return: 0 (Success)
 */
int _islower(int c)
{
	char c;
	if(c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar ('\n');
}
