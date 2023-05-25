#include "simple_shell.h"

/**
* appending_path - adds path to command
* @mypath: path of command
* @mycommand: user entered command
*
* Return: buffer containing command with path on success
* NULL on failure
*/
char *appending_path(char *mypath, char *mycommand)
{
	char *buffer, string;
	size_t x = 0, y = 0;

	if (mycommand == 0)
		mycommand = "";

	if (mypath == 0)
		mypath = "";

	string = (_stringlen(mypath) + _stringlen(mycommand) + 2);
	buffer = malloc(sizeof(char) * string);

	if (!buffer)
		return (NULL);

	while (mypath[x])
	{
		buffer[x] = mypath[x];
		x++;
	}

	if (mypath[x - 1] != '/')
	{
		buffer[x] = '/';
		x++;
	}
	while (mycommand[y])
	{
		buffer[x + y] = mycommand[y];
		y++;
	}
	buffer[x + y] = '\0';
	return (buffer);
}
