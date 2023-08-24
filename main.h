#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define STDOUT_FILEND 1
char *_getenv (const char *name);
int exit_main(void);
int shell_main(void);
int pompt_main(void);
unsigned int check_delim(char c, const char *str);
char *_strtok(char *stri, const char *del);
#endif
