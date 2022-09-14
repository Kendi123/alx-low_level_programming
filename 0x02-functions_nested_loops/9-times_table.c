#include "main.h"

/**
 * times_table - prints the times table from 0 - 9
 * Return: void
 */
void times_table(void)
{
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			if (col < 1)
			{
				_putchar(0);
			}
			else
			{
				_putchar(row * col);
			}
		}
		_putchar('\n');
			if (row < 1)
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
