#include "simple_shell.h"
/**
 *checking- checks to see weather its a built in function
 *@mycmd: tokenized user input
 *@mybuffer: line drived fromgetline function
 *Return: 1 if cmd excuted 0 if cmd is not executed
 */
int checking(char **mycmd, char *mybuffer)
{
	if (hilt_builtin(mycmd, mybuffer))
		return (1);
	else if (**mycmd == '/')
	{
		executes(mycmd[0], mycmd);
		return (1);
	}
	return (0);
}
