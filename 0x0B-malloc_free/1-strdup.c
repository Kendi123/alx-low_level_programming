#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to the duplicated string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string if successful
 * and NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ar = (char *)malloc(sizeof(char) * (i + 1));
		if (ar == NULL)
		{
			return (NULL);
		}
		for (j = 0; j <= 1; j++)
		{
			ar[i] = str[j];
		}
		return (ar);
	}
}
