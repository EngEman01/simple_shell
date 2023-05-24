#include "shell.h"
/* Reset handler to catch SIGINT next time. */
void sigint_handler(int sig_num)
{
(void)sig_num;
signal(SIGINT, sigint_handler);
printf("\n");
fflush(stdout);
}
