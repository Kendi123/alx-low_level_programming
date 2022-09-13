#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet
 * folowed by a new line
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char c = 'a';

		while(c >= 'a' && c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
