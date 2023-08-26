#include "shell.h"

/**
 * _strcpy - return string copy.
 *
 * @dest: string that we need to copy in.
 * @src: string to copy from.
 *
 * Return: 0 on fail, 1 on sccess
 */
int _strcpy(char *dest, char *src)
{
	int len = 0;

	if (src == NULL || dest == NULL)
		return (0);

	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';

	return (1);
}
