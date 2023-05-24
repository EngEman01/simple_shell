#ifndef _SHELL_
#define _SHELL_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

#define MAX_LINE 80
#define READ_SIZE 1024

void parse_cmd(char *cmd, char **args);
char *search_path(char *cmd);
void execute_command(char **args, char *prog_name, char **env, int line_num);
void print_environment(char **env);
char *getline_func(const int fd);
void error_message(char *prog_name, char *command, char *err, int line_num);

#endif
