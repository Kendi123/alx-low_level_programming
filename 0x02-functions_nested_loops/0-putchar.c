#include <unistd.h>
#include "main.h"

/**
 * main - this prints _putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int _putchar(void)
	{
		return (write(1, _putchar, 8));
	}
	return (0);
}

