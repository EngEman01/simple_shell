#include "shell.h"

/**
 * print_environment - prints the environment variables.
 */

void print_environment(char **env)
{
extern char **environ;
env = environ;

while (*env != NULL)
{
printf("%s\n", *env);
env++;
}
}
