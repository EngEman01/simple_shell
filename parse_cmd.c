#include "shell.h"
/**
 * parse_cmd - parses a command into an array of arguments.
 * @cmd: The command to parse.
 * @args: The array to store the arguments in.
 * Return: void
 */
void parse_cmd(const char *cmd, char **args)
{
int i = 0;
char *token;
char *cmd_copy = strdup(cmd);

token = strtok(cmd_copy, " \t\n");
while (token != NULL && i < MAX_LINE / 2 + 1)
{
args[i] = strdup(token);
token = strtok(NULL, " \t\n");
i++;
}
args[i] = NULL;

free(cmd_copy);
}
