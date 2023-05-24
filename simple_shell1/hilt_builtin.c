#include "simple_shell.h"

/**
* hilt_builtin - handles execution of builtin functions
* @mycommand: tokenized commands
* @myline: input read from stdin
*
* Return: 1 if executed, 0 if not
*/
int hilt_builtin(char **mycommand, char *myline)
{
	struct builtingin builtingin = {"environ", "close"};

	if (_stringcmp(*mycommand, builtingin.environ) == 0)
	{
		print_enviro();
		return (1);
	}
	else if (_stringcmp(*mycommand, builtingin.close) == 0)
	{
		close_cmd(mycommand, myline);
		return (1);
	}
	return (0);
}
