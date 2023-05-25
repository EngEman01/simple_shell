#include "simple_shell.h"
/**
 * lookout_path - finds the path from the global enviroment
 * Return: NULL if path is not found or path if path is found.
 */
char *lookout_path(void)
{
char **env = environ;
char *mypath = NULL;

while (*env)
{
if (_stringncmp(*env, "PATH=", 5) == 0)
{
mypath = *env + 5;
return mypath;
}
env++;
}

return NULL;
}
