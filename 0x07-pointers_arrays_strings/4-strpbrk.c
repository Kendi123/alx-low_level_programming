#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: main string to be searched
 * @accept: string to be searched
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	while (s[i] != '\0')
	{
		i++;
		while (accept[j] != '\0')
		{
			j++;
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
