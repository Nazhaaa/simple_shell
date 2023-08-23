#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024
/**
 * exit_main - Entry point of the simple shell program.
 * This simple shell program demonstrates basic shell functionality.
 * It reads user input, processes built-in , and exits upon "exit".
 * buffer:pointer
 * token:token
 *Return: Always 0 (Success).
 */
int exit_main(void)
{
char buffer[BUFFER_SIZE];
char *token;
while (1)
{
printf("$ ");
fgets(buffer, BUFFER_SIZE, stdin);
buffer[strcspn(buffer, "\n")] = '\0';
token = strtok(buffer, " ");
if (token != NULL)
{
if (strcmp(token, "exit") == 0)
{
printf("Exiting shell...\n");
break;
}
else
{
printf("Unrecognized command: %s\n", token);
}
}
}
return (0);
}

