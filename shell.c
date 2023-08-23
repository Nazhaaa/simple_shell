#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *shell_main - Entry point of the custom shell program.
 * This program implements a basic custom shell that reads user input,
 * parses the input into tokens, and attempts to execute the specified command.
 * It supports multiple command-line arguments separated by spaces or tabs.
 * buffer: Pointer to store user input.
 * siz: Size of the input buffer.
 * i: Counter for tokenized elements.
 * Read: Number of characters read from input.
 * token: Tokenized substring of input.
 * array: Array of pointers to tokenized elements.
 * stat: Status of the child process.
 * pid: Process ID of the child process.
 *  Return: Always 0 (Success).
 */
int shell_main(void)
{
char *buffer = NULL;
size_t siz = 0, i = 0;
int Read = 0;
char *token;
char **array;
int stat;
pid_t pid;
array = malloc(sizeof(char *) * 1024);
while (1)
{
write(STDOUT_FILEND, "$ ", 2);
Read = getline(&buffer, &siz, stdin);
token = strtok(buffer, "\t\n");
while (token)
{
array[i] = token;
token = strtok(NULL, "\t\n");
i++;
}
array[i] = NULL;
pid = fork();
if (pid == 0)
{
if (execve(array[0], array, NULL) == -1)
perror("execve");
}
else
wait(&stat);
i = 0;
free(array);
}
return (0);
}

