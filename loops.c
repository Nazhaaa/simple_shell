#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char *buffer = NULL;
size_t siz = 0 ,i = 0;
int Read = 0;
char *token;
char **array;
int stat;
pid_t pid ;
array = malloc (sizeof(char *)*1024);
while(1)
{
write(STDOUT_FILEND, "$ ", 2);
Read = getline(&buffer, &siz, stdin);
token = strtok (buffer, "\t\n");
while(token)
{
array[i] = token;
token = strtok (NULL, "\t\n");
i++;
}
array [i] = NULL;
pid = fork();
if (pid == 0)
{
if (execve(array[0], array = NULL) == -1)
perror ("execve");
}
else
wait (&stat);
i = 0;
free(array);
}
}

