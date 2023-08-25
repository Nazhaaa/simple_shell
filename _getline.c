#include "main.h"

/**
 * _getline - my own getline simpleshell
 * @ptr: input
 * @n: input
 * @str: input
 * Return: poss
 */

ssize_t _getline(char **ptr, size_t *n, FILE *str)
{
size_t poss = 0, n_size;
int c;
char *n_buffer;
if (ptr == NULL || n == NULL || str == NULL)
return (-1);
if (*ptr == NULL || *n == 0)
{
*n = IBS;
*ptr = (char *)malloc(*n);
if (*ptr == NULL)
return (-1);
}
c = fgetc(str);
while (c)
{
if (poss >= *n - 1)
{
n_size = *n * BGF;
n_buffer = (char *)realloc(*ptr, n_size);
if (n_buffer == NULL)
return (-1);
*ptr = n_buffer;
*n = n_size;
}
(*ptr)[poss++] = c;
if (c == '\n')
break;
}
if (poss == 0 && c == EOF)
return (-1);
(*ptr)[poss] = '\0';
return (poss);
}
