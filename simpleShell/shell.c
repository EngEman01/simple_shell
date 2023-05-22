#include "shell.h"
/**
 * main - carries out the read, execute then print output loop
 * Return: 0
 */
int main(void)
{
char *args[MAX_LINE / 2 + 1];
int should_run = 1;
char *cmd;

while (should_run)
{
printf("($) ");
fflush(stdout);

cmd = _getline(STDIN_FILENO);
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
print_environment();
}
else
{
execute_command(args);
}
}
return (0);
}
