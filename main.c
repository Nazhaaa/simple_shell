#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the interactive shell program.
 * This program implements a simple interactive shell that displays
 * a command prompt, reads user input, processes the entered command,
 * and waits for the command to complete before prompting for the next one.
 *  It initializes the shell environment, handles user interactions,
 * executes commands in child processes, and manages their status.
 * buffer: Pointer
 * arg: Array
 * siz: Size of the input buffer.
 * Read: Number of characters read from input.
 * pid: Process ID of child process.
 * stat: Status of child process.
 * Return: Always 0 (Success).
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
