#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define STDOUT_FILEND 1





int main (void)
{
char *buffer = NULL , *arg[] = {NULL,NULL};
size_t siz;
int Read, pid, stat;
while (1)
{
write (STDOUT_FILEND,"$ ",2);
Read = getline(&buffer,&siz,stdin);
if(Read >= 0)
{
buffer[Read -1] = '\0';	
arg[0] = buffer;
pid = fork();
if (pid == 0)
execve(buffer, arg, NULL);
else if (pid > 1)
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
return(0);
}	


