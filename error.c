#include "shell.h"
/**
 * error_message - prints an error message to the standard error stream
 * @prog_name: the name of the program that generated the error
 * @err: the error message to print
 * @line_num: the line number where the error occurred
 * @command: the command passed
 * Return: void
 */
void error_message(char *prog_name, char *command, char *err, int line_num)
{
fprintf(stderr, "%s: %d: %s: %s\n", prog_name, line_num, command, err);
}
