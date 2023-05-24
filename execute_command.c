#include "shell.h"

/**
 * execute_command - executes a command.
 * @args: The array of arguments for the command.
 * @prog_name: print the error message with the program
 * @env: pointer to an array of environment variables
 * @line_num: the line number where the error occurred
 * Return: void
 */

void execute_command(char **args, char *prog_name, char **env, int line_num)
{
char *full_path;
if (args[0] == NULL || args[0][0] == '\0') {
return;
}

if (strchr(args[0], '/') != NULL)
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
if (execve(full_path, args, env) == -1)
{
error_message(prog_name,  args[0], "not found", line_num);
exit(EXIT_SUCCESS);
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
error_message(prog_name,  args[0], "not found", line_num);
}
}
