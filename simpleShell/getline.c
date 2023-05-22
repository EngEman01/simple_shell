#include "shell.h"

/**
 * getline_func - reads an entire line from a file descriptor
 * @fd: the file descriptor to read from
 * Return: the line read from the file descriptor
 */

char *getline_func(const int fd)
{
static char buffer[READ_SIZE];
static ssize_t len;
static ssize_t i;
char *line;
ssize_t j;

if (fd == -1 || READ_SIZE <= 0)
return (NULL);
line = malloc(READ_SIZE);
if (!line)
return (NULL);
for (j = 0; i < len; i++)
{
if (buffer[i] == '\n')
{
line[j] = '\0';
i++;
return (line);
}
line[j++] = buffer[i];
}
len = read(fd, buffer, READ_SIZE);
i = 0;
while (i < len)
{
if (buffer[i] == '\n')
{
line[j] = '\0';
i++;
return (line);
}
line[j++] = buffer[i++];
}
free(line);
return (NULL);
}
