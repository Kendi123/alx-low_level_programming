#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: input variable
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 10)
	{
		a = a * -1;
	}
	_putchar(n + '0');
	return ('a');
}
