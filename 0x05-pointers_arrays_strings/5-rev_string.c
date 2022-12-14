#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * return: always (0)
 */
void rev_string(char *s)
{
	int i, j, temp;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (j > i)
	{
		temp = s[j];
		s[j--] = s[i];
		s[i++] = temp;
	}
}
