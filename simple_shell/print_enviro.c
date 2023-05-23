#include "simple_shell.h"

/**
* print_enviro - prints the environment string to stdout
*
* Return: 0
*/
void print_enviro(void)
{
	int p = 0;
	char **env = environment;

	while (env[p])
	{
		write(STDOUT_FILENO, (const void *)env[p], _stringlen(env[p]));
		write(STDOUT_FILENO, "\n", 1);
		p++;
	}
}
