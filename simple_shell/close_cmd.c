#include "simple_shell.h"

/**
* close_cmd - handles the exit command
* @mycommand: tokenized command
* @myline: input read from stdin
*
* Return: no return
*/
void close_cmd(char **mycommand, char *myline)
{
	free(myline);
	gratis_buffers(mycommand);
	exit(0);
}
