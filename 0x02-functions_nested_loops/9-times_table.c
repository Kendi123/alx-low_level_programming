#include "main.h"

/**
 * times_table - prints the times table from 0 - 9
 * Return: void
 */
void times_table(void)
{
	int row = 1;
	int col = 1;

	for (row = 1; row <= 9; row++)
	{
		for (col = 1; col <= 9; col++)
		{
			if (col <= 1)
			{
				_putchar(0);
			}
			else
			{
				_putchar(row * col);
			}
		}
		_putchar('\n');
			if (row <= 1)
			{
				_putchar(0);
			}
			else
			{
				_putchar(row * col);
			}
			_putchar('\n');
	}
}
