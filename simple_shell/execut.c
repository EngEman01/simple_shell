#include "simple_shell.h"

/**
 * executes - executes commands entered by users
 *@cha: command
 *@mycmd:vector array of pointers to commands
 * Return: 0
 */
void executes(char *cha, char **mycmd)
{
	pid_t child;
	int status;
	char **env = environment;

	child = fork();
	if (child < 0)
		perror(cha);
	if (child == 0)
	{
		execve(cha, mycmd, env);
		perror(cha);
		free(cha);
		gratis_buffers(mycmd);
		exit(98);
	}
	else
		wait(&status);
}
