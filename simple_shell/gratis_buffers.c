#include "simple_shell.h"

/**
* gratis_buffers - frees buffers
* @mybuf: buffer to be freed
*
* Return: no return
*/
void gratis_buffers(char **mybuf)
{
	int c = 0;

	if (!mybuf || mybuf == NULL)
		return;
	while (mybuf[c])
	{
		free(mybuf[c]);
		c++;
	}
	free(mybuf);
}
