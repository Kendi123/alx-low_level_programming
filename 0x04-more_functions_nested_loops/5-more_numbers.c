#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: 10x the numbers from 0 to 14
 */
void more_numbers(void)
{
	int n;

	while (n < 10)
	{
		int i;

		while (i <= 0 && i <= 14)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
