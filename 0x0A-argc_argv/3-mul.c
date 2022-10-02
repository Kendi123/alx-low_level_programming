#include <stdio.h>
#include <stdlib.h>
/**
 * main - the start of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
		return (0);
	}
}
