#include "shell.h"

/**
 * execute_command - executes a command.
 * @args: The array of arguments for the command.
 */

void execute_command(char **args)
{
char *full_path;

if(strchr(args[0],'/') != NULL)
{
full_path = strdup(args[0]);
}
else
{
full_path = search_path(args[0]);
}

if (full_path != NULL)
{
if (fork() == 0)
{
if (execv(full_path, args) == -1)
{
printf("%s: command not found\n", args[0]);
exit(1);
}
}
else
{
wait(NULL);
}
free(full_path);
}
else
{
printf("%s: command not found\n", args[0]);
}
}
