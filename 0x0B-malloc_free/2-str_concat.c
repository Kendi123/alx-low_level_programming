#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the result. or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * i + sizeof(char) * j + 1);
	if (p == NULL)
		free(p);
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
		l = j;
	for (j = 0; j <= l; k++ j++)
		p[k] = s2[j];
	return (p);
}
