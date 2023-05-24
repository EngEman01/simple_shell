#include "shell.h"

/**
 * print_environment - prints the environment variables
 * @env: pointer to an array of environment variables
 * Return: void
 */

void print_environment(char **env)
{
int i;
for (i = 0; env[i] != NULL; i++)
{
printf("%s\n", env[i]);
}
}
