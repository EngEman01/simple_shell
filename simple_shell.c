#include "simple_shell.h"
/**
* main - carries out the read, execute then print output loop
* @count: argument count
* @vector: argument vector
* @envirtor: environment vector
*
* Return: 0
*/

int main(int count, char **vector, char *envirtor[])
{
	char *myline = NULL, *mypathcommand = NULL, *mypath = NULL;
	size_t bufsize = 0;
	ssize_t linesize = 0;
	char **mycommand = NULL, **mypaths = NULL;
	(void)envirtor, (void)vector;
	if (count < 1)
		return (-1);
	signal(SIGINT, hilt_signal);
	while (1)
	{
		gratis_buffers(mycommand);
		gratis_buffers(mypaths);
		free(mypathcommand);
		expedite_user();
		linesize = getline(&myline, &bufsize, stdin);
		if (linesize < 0)
			break;
		infor.len_count++;
		if (myline[linesize - 1] == '\n')
			myline[linesize - 1] = '\0';
		mycommand = tokening(myline);
		if (mycommand == NULL || *mycommand == NULL || **mycommand == '\0')
			continue;
		if (checking(mycommand, myline))
			continue;
		if (strcmp(mycommand[0], "exit") == 0)
		exit(0);

		mypath = lookout_path();
		mypaths = tokening(mypath);
		mypathcommand = testing_path(mypaths, mycommand[0]);
		if (!mypathcommand)
			perror(vector[0]);
		else
			executes(mypathcommand, mycommand);
	}
	if (linesize < 0 && lores.interac)
		write(STDERR_FILENO, "\n", 1);
	free(myline);
	return (0);
}
