#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/*
 * main - Entry point of the program.
 * This program showcases the use of command-line arguments and environment .
 * It prints the memory addresses of the 'envir' and 'environ'.
 * ac:Number of command-line arguments.
 * av:Array of command-line argument strings.
 * envir:Array of environment variable strings.
 * environ:envirment
 * Return: Always 0 (Success).
 */
int main(int ac, char **av, char **envir)
{
char **environ;
printf("%p\n", envir);
printf("%p\n", environ);
return (0);
}
