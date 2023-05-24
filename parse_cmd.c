#include "shell.h"
/**
 * parse_cmd - parses a command into an array of arguments.
 * @cmd: The command to parse.
 * @args: The array to store the arguments in.
 * Return: void
 */
void parse_cmd(char *cmd, char **args)
{
int i = 0;
args[i] = strtok(cmd, " ");
while (args[i] != NULL)
{
i++;
args[i] = strtok(NULL, " ");
}
}
