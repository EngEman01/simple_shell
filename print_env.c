#include "shell.h"

/**
 * print_environment - prints the environment variables
 * @env: pointer to an array of environment variables
 */

void print_environment(char **env)
{
while (*env != NULL)
{
printf("%s\n", *env);
env++;
}
}
