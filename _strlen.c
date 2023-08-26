#include "shell.h"

/**
 * _strlen - return string len.
 *
 * @line: string that we need it's len.
 *
 * Return: strlen of string.
 */
int _strlen(char *line)
{
	int len = 0;

	if (line == NULL)
		return (0);

	while (line[len])
		len++;

	return (len);
}
