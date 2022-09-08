#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;
	float fl;
	long int longint;
	long long int longlongint;

	printf("Size of a char is: %zu byte(s)\n" sizeof(ch));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongint));
	printf("Size of a float:%zu byte(s)\n", sizeof(fl));
	return (0);
}
