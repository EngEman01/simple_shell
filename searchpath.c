#include "shell.h"
/**
 * search_path - searches for a command in the directories specified by the
 * `PATH` environment variable.
 * @cmd: The command to search for.
 * Return: The full path of the command if it is found and executable,
 * otherwise `NULL`.
 */
char *search_path(char *cmd)
{
char *path = getenv("PATH");
char *path_copy = strdup(path);
char *dir = strtok(path_copy, ":");
char *full_path = malloc(MAX_LINE);

while (dir != NULL)
{
sprintf(full_path, "%s/%s", dir, cmd);
if (access(full_path, X_OK) == 0)
{
free(path_copy);
return (full_path);
}
dir = strtok(NULL, ":");
}

free(path_copy);
free(full_path);
return (NULL);
}
