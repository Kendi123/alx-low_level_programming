#include "main.h"
/**
 * print_most_numbers - prints numbers btn 0-9,
 * except 2 and 4
 *
 * Return: all numbers btn 0-9 except 2, 4
 */
void print_most_numbers(void)
{
	int i;

	while (i >= 0 && i <= 9)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
