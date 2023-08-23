#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define STDOUT_FILEND 1
int main(int ac, char **av, char **envir);
int exit_main(void);
#endif
