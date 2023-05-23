#include "shell.h"

/**
 * print_environment - prints the environment variables.
 */

void print_environment(void)
{
char **env = environ;

while (*env != NULL)
{
printf("%s\n", *env);
env++;
}
}
