#include "main.h"

/**
 * built- implements  exit ,print_env builtins
 * @c  buffer command line
 * @args:   parsed ags
 * @env:   env variable
 * @exit:   exit status
 * Return: void
 */
void built(char *c, char **args, char **env, int *exit)
{
if (str_cmp(args[0], "exit") == 0)
{
free(args);
free(c);
exit(*exit);
}
if (str_cmp(args[0], "env") == 0)
print_env(env, exit);
}
/**
 * exec - executed in   main
 * @stat:   status of   path,if   file is executable
 * @args:  parsed args
 * @exit:   exit status
 * @tal: tally of commands or attempted commands that were run
 * Return: void
 */
void exec(int stat, char **args, int *exit_st, int *tal)
{
if (stat == 2)
{
if (access(args[0], X_OK) == 0)
{
if (fork() == 0)
execve(args[0], args, NULL);
else
wait(NULL);
*exit = 0;
}
else if (access(args[0], F_OK) != 0){
printstr_("sh: ");
print_int(taly);
printstr_(": ");
perror(args[0]);
*exit = 127;
}
else if (access(args[0], F_OK) == 0 && access(args[0], X_OK) != 0)
{
printstr_("sh: ");
print_int(taly);
printstr_(": ");
perror(args[0]);
*exit = 126;
}
}
free(args);
}


