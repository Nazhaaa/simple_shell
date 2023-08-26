#include "shell.h"

/**
 * _strcmp - compare two strings.
 *
 * @s1: first string
 * @s2: second string
 * @len: length to compare in
 *
 * Return: 0 in match -1 else.
 *
 */
int _strcmp(char *s1, char *s2, size_t len)
{
	size_t i = 0;

	for (i = 0 ; s1[i] && s2[i] && i < len ; i++)
	{
		if (s1[i] != s2[i])
		{
			return (-1);
		}
	}

	if (i == len)
		return (0);

	return (-1);
}
