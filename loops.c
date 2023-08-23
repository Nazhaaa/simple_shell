#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/*
 * main - entre pointe
 * @ac:ac
 * @av:poin
 * @buffer:
 * @siz:size
 * @Read:read
 * Return:0 sucess
 */
int main(int ac, char **av)
{
(void)ac;
char *buffer = NULL;
size_t siz = 0;
int Read = 0;
write(STDOUT_FILEND, "$ ", 2);
Read = getline(&buffer, &siz, stdin);
if (Read == -1)
perror("getlin");
buffer[Read - 1] = '\0';
printf("%s\n", buffer);
return (0);
}

