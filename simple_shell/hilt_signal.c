#include "simple_shell.h"

/**
 *hilt_signal- it keeps track is interactive mode
 *@myhilt: the signal number
 *Return: nothing
 */

void hilt_signal(int myhilt)
{
	(void)myhilt;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
