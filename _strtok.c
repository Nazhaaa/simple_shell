#include "main.h"
/**
 * check_delim - Checks If A Character Match Any Char *
 * @c: Character To Check
 * @str: String To Check
 * Return: 1 Succes, 0 Failed
 */
unsigned int check_delim(char c, const char *str)
{
unsigned int i;
for (i = 0; str[i] != '\0'; i++)
{
if (c == str[i])
return (1);
}
return (0);
}
/**
 * _strtok - Token A String Into Token (strtrok)
 * @stri: String
 * @del: Delimiter
 * Return: Pointer To The Next Token Or NULL
 */
char *_strtok(char *stri, const char *del)
{
static char *tsa;
static char *nta;
unsigned int i;
if (stri != NULL)
nta = stri;
tsa = nta;
if (tsa == NULL)
return (NULL);
for (i = 0; tsa[i] != '\0'; i++)
{
if (check_delim(tsa[i], del) == 0)
break;
}
if (nta[i] == '\0' || nta[i] == '#')
{
nta = NULL;
return (NULL);
}
tsa = nta + i;
nta = tsa;
for (i = 0; nta[i] != '\0'; i++)
{
if (check_delim(nta[i], del) == 1)
break;
}
if (nta[i] == '\0')
nta = NULL;
else
{
nta[i] = '\0';
nta = nta + i + 1;
if (*nta == '\0')
nta = NULL;
}
return (tsa);
}
