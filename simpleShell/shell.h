#ifndef _SHELL_
#define _SHELL_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_LINE 80
extern char **environ;

void parse_cmd(char *cmd, char **args);
char *search_path(char *cmd);
void execute_command(char **args);
void print_environment(void);

#endif
