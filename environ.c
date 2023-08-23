#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *This program demonstrates the concept of environment variables
 *C programs. It prints the memo addr of the 'envir'nd 'environ' arrays.
 * @ac: Number of command-line arguments.
 * @av: Array of command-line argument strings.
 * @envir: Array of environment variable strings.
 *Return: Always 0 (Success).
 */
int main(int ac, char **av, char **envir)
{
char **environ = envir;
printf("Memory address of 'envir': %p\n", (void *)envir);
printf("Memory address of 'environ': %p\n", (void *)environ);
return (0);
}

