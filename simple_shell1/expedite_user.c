#include "simple_shell.h"

/**
* expedite_user - prints $ to let user know the program is
* ready to take their input
* prints the prompt if the shell is in interactive mode
* Return: no return
*/
void expedite_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		lores.interac = 1;
	if (lores.interac)
		write(STDERR_FILENO, "$ ", 2);
}
