#include "simple_shell.h"

/**
* testing_path - checks whether path is valid
* @mypath: tokenized path
* @mycommand: user entered command
*
* Return: path appended with command on success
* NULL on failure
*/
char *testing_path(char **mypath, char *mycommand)
{
	int i = 0;
	char *output;

	while (mypath[i])
	{
		output = appending_path(mypath[i], mycommand);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		i++;
	}
	return (NULL);
}
