#include <stdio.h>
#include <stdlib>
/**
 * main - start of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if  (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i])
		}
		printf("%d\n", sum);
	}
	else if (argc < 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
