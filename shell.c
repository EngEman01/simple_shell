#include "shell.h"
/**
 * main - entry point for the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * @env: array of environment variables
 * Return: 0
 */
int main(int argc, char *argv[], char *env[])
{
char *args[MAX_LINE / 2 + 1];
int should_run = 1;
char *cmd;
(void)argc;
while (should_run)
{
printf("$ ");
fflush(stdout);
cmd = getline_func(STDIN_FILENO);
if (cmd == NULL)
{
printf("\n");
exit(0);
}
cmd[strcspn(cmd, "\n")] = '\0';
parse_cmd(cmd, args);
if (strcmp(args[0], "exit") == 0)
{
should_run = 0;
}
else if (strcmp(args[0], "env") == 0)
{
print_environment(env);
}
else
{
execute_command(args, argv[0], env);
}
free(cmd);
}
return (0);
}
