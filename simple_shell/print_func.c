#include "simple_shell.h"

/**
* _putchar - writes the character c to stdout
* @ch: The character to print
*
* Return: On success 1.
* On error, -1 is returned and errno set appropriately
*/
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

/**
* print_string - prints a string
* @str: string to be printed
*
* Return: number of characters printed
*/
int print_string(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}

	return (x);
}
