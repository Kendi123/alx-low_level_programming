#include "main.h"
/**
 *  _strcmp - compares two strings
 *  @s1: string 1
 *  @s2: string 2
 *  Return: 0 if the strings are equal, an integer less than
 *  if s1 is less than s2 or greater than if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			res = s1[i] - s2[i];
		}
		else if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}
	if (res < 0)
		return (res);
	else if (res == 0)
		return (0);
	else
		return (res);
}
