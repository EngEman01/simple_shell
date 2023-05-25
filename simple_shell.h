#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

/* environment variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* handle built ins */
int checking(char **mycmd, char *mybuffer);
void expedite_user(void);
void hilt_signal(int myhilt);
char **tokening(char *myline);
char *testing_path(char **mypath, char *mycommand);
char *appending_path(char *mypath, char *mycommand);
int hilt_builtin(char **mycommand, char *myline);
void close_cmd(char **mycommand, char *myline);

void print_enviro(void);

/* string handlers */
int _stringcmp(char *str1, char *str2);
int _stringlen(char *str);
int _stringncmp(char *str1, char *str2, int num);
char *_stringdup(char *str);
char *_stringchr(char *str, char ch);

void executes(char *cha, char **mycmd);
char *lookout_path(void);

/* helper function for efficient free */
void gratis_buffers(char **mybuf);

struct builtingin
{
	char *environ;
	char *close;
} builtingin;

struct infor
{
	int final_close;
	int len_count;
} infor;

struct lores
{
	bool interac;
} lores;

#endif /* SIMPLE_SHELL_H */
