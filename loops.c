#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/*
 * @buffer: pointer
 * @arg: array
 * @siz: size_t
 * @Read: read
 * @pid: process id
 * @stat: status
 */
int main(void)
{
char *buffer = NULL, *arg[] = {NULL, NULL};
size_t siz;
int Read, pid, stat;
while (1)
{
write(STDOUT_FILEND, "$ ", 2);
Read = getline(&buffer, &siz, stdin);
if (Read >= 0)
{
buffer[Read - 1] = '\0';
arg[0] = buffer;
pid = fork();
if (pid == 0)
execve(buffer, arg, NULL);
else if (pid > 0)
wait(&stat);
free(buffer);
buffer = NULL;
}
else
{
free(buffer);
break;
}
}
return (0);
}

