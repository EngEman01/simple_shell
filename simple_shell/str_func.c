#include "simple_shell.h"

/**
* _stringcmp - compares two strings
* @str1: compared to s2;
* @str2: compared to s1;
*
* Return: returns difference between strings
*/
int _stringcmp(char *str1, char *str2)
{
	int i = 0, output;

	while (*(str1 + i) == *(str2 + i) && *(str1 + i) != '\0')
		i++;

	output = (*(str1 + i) - *(str2 + i));

	return (output);
}

/**
* _stringlen - returns the length of a string
* @str: string passed
*
* Return: returns length of string passed
*/
int _stringlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
* _stringncmp - compares two strings up to n bytes
* @str1: compared to str2
* @str2: compared to str1
* @num: number of bytes
*
* Return: difference between str1 and str2
*/
int _stringncmp(char *str1, char *str2, int num)
{
	int i;

	for (i = 0; str1[i] && str2[i] && i < num; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}

/**
* _stringdup - dupicates string
* @str: to be duplicated
*
* Return: pointer to duplicate string
*/
char *_stringdup(char *str)
{
	char *ptr;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = _stringlen(str);

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; *str != '\0'; str++, i++)
		ptr[i] = str[0];

	ptr[i++] = '\0';
	return (ptr);
}

/**
* _stringchr - locates a character in a string
* @str: string to be checked
* @ch: character to be located
*
* Return: returns pointer to first occurence of character
* or NULL if character not found
*/
char *_stringchr(char *str, char ch)
{
	while (*str)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	if (!ch)
		return (str);
	return (NULL);
}
