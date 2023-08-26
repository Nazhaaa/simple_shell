#include "shell.h"

/**
 * free_arr - to free 2d array.
 *
 * @arr: array to free.
 *
 * Return: void.
 */

void free_arr(char **arr)
{
	int i = 0;

	if (arr == NULL)
		return;

	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
