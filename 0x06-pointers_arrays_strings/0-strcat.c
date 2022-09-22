#include "main.h"
/**
 * _strcat - concatenates two strings, appends the src string to the
 * dest string, overwriting the terminating null byte of dest, and
 * adds a terminating null byte
 * @dest: pointer to the first string
 * @src: pointer to the 2nd string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
